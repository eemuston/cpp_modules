/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:55:50 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/09 20:22:59 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const signGrade, int const executionGrade) : _name(name), _signGrade(signGrade), _executionGrade(executionGrade)
{
	if (signGrade > 150 || executionGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || executionGrade < 1)
		throw GradeTooHighException();
	_signed = false;
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _signGrade (src._signGrade), _executionGrade(src._executionGrade)
{
	*this = src;
}

Form &Form::operator=(Form const &src)
{
	_signed = src._signed;
	return(*this);
}

Form::~Form()
{
	
}

const char *Form::GradeTooHighException::what() const throw()
{
	return("Grade of the Form is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("Grade of the Form is too low");
}

std::string const Form::getName(void)
{
	return(_name);
}

bool Form::getIsSigned(void)
{
	return(_signed);
}

int Form::getSignGrade(void)
{
	return(_signGrade);
}

int Form::getExecutionGrade(void)
{
	return(_executionGrade);
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, Form &src)
{
	o << src.getName() << ", signGrade is " << src.getSignGrade() << " and executionGrade is " << src.getExecutionGrade() << " and it's signing status is " << src.getIsSigned() << std::endl;
	return(o);
}