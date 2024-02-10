/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:33:04 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/10 14:36:32 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) 
{
	
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