/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:00:04 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 19:48:06 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) 
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm("PresidentialPardonForm", 25, 5), _target(src._target) 
{
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	_target = src._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return(_target);
}

const char *PresidentialPardonForm::GradeTooLowExecutorException::what() const throw()
{
	return("Grade of the Executor is too low");
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getExecutionGrade())
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
	else
		throw GradeTooLowExecutorException();
}

