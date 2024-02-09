/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:45:52 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/09 18:20:15 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name) : _name(name), _grade(150)
{
}

Bureaucrat::Bureaucrat(int grade) : _name("default")
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
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
	if (_grade <= 1)
		throw GradeTooHighException();
	else
	{
		std::cout << "Incrementing grade" << std::endl;
		_grade--;
	}
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
	{
		std::cout << "Decrementing grade" << std::endl;
		_grade++;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade of the bureaucrat is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade of the bureaucrat is too low");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return(o);
}
