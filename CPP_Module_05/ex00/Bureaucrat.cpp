/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:45:52 by eemuston          #+#    #+#             */
/*   Updated: 2024/01/16 12:12:25 by eemuston         ###   ########.fr       */
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