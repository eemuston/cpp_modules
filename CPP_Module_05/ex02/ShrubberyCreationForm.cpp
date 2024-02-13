/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:50:12 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 19:48:00 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) 
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm("ShrubberyCreationForm", 145, 137), _target(src._target) 
{
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	_target = src._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return(_target);
}

const char *ShrubberyCreationForm::GradeTooLowExecutorException::what() const throw()
{
	return("Grade of the Executor is too low");
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getExecutionGrade())
	{
		std::ofstream shrubberyfile(_target + "_shrubbery");

		shrubberyfile << "    *\n   /|\\\n  / | \\\n /  |  \\\n/   |   \\\n";
		
		shrubberyfile.close();
	}
	else
		throw GradeTooLowExecutorException();
}