/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:33:04 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 19:48:10 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) 
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm("RobotomyRequestForm", 72, 45), _target(src._target) 
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	_target = src._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return(_target);
}

const char *RobotomyRequestForm::GradeTooLowExecutorException::what() const throw()
{
	return("Grade of the Executor is too low");
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getExecutionGrade())
	{
		std::cout << "Brrrrr Brrrrr Brrrrr" << std::endl;
		if (std::rand() % 2)
			std::cout << _target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
	else
		throw GradeTooLowExecutorException();
}
