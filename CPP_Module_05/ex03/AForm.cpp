/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:55:50 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 12:20:36 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, int const signGrade, int const executionGrade) : _name(name), _signGrade(signGrade), _executionGrade(executionGrade)
{
	if (signGrade > 150 || executionGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || executionGrade < 1)
		throw GradeTooHighException();
	_signed = false;
}

AForm::AForm(AForm const &src) : _name(src._name), _signed(src._signed), _signGrade (src._signGrade), _executionGrade(src._executionGrade)
{
	*this = src;
}

AForm &AForm::operator=(AForm const &src)
{
	_signed = src._signed;
	return(*this);
}

AForm::~AForm()
{
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return("Grade of the Form is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return("Grade of the Form is too low");
}

std::string const AForm::getName(void) const
{
	return(_name);
}

bool AForm::getIsSigned(void) const
{
	return(_signed);
}

int AForm::getSignGrade(void) const
{
	return(_signGrade);
}

int AForm::getExecutionGrade(void) const
{
	return(_executionGrade);
}

void AForm::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, AForm &src)
{
	o << src.getName() << ", signGrade is " << src.getSignGrade() << " and executionGrade is " << src.getExecutionGrade() << " and it's signing status is " << src.getIsSigned() << std::endl;
	return(o);
}