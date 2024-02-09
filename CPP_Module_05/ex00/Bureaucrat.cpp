/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:45:52 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/09 17:45:37 by eemuston         ###   ########.fr       */
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
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		if (grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		if (grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
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
	try
	{
		if (_grade <= 1)
			throw GradeTooHighException();
		else
			_grade--;
	}
	catch (GradeTooHighException)
	{
		std::cout << "Grade of the bureaucrat is too high" << std::endl;
	}
}

void Bureaucrat::decrementGrade(void)
{
	try
	{
		if (_grade >= 150)
			throw GradeTooLowException();
		else
			_grade++;
	}
	catch (GradeTooLowException)
	{
		std::cout << "Grade of the bureaucrat is too low" << std::endl;
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
