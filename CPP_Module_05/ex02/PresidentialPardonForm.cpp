/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:00:04 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/10 14:31:09 by eemuston         ###   ########.fr       */
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
