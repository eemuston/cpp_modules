/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:45:52 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/05 12:55:33 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		if (grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException)
	{
		std::cout << "Grade of the bureaucrat is too high" << std::endl;
	}
	catch (GradeTooLowException)
	{
		std::cout << "Grade of the bureaucrat is too low" << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	_grade = src._grade;
	return(*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string const Bureaucrat::getName(void)
{
	return(_name);
}

int Bureaucrat::getGrade(void)
{
	return(_grade);
}

void Bureaucrat::incrementGrade(void)
{
	_grade--;
	try
	{
		if (_grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException)
	{
		std::cout << "Grade of the bureaucrat is too high" << std::endl;
	}
}

void Bureaucrat::decrementGrade(void)
{
	_grade++;
	try
	{
		if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException)
	{
		std::cout << "Grade of the bureaucrat is too low" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return(o);
}
