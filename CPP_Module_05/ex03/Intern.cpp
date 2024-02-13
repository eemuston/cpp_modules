/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:02:31 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 12:24:22 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern &Intern::operator=(Intern const &src)
{
	if (this == &src)
		return(*this);
	return (*this);
}

Intern::~Intern()
{}

AForm *Intern::createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::createPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	std::string		levels[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int				i = 0;

	while (i < 3)
	{
		if (form.compare(levels[i]) == 0)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
		{
			return (this->createShrubbery(target));
		}
		case 1:
		{	
			return (this->createRobotomy(target));
		}
		case 2:
		{
			return (this->createPresidential(target));
		}
		default:
			throw NoFormException();
	}
	return (0);
}

const char *Intern::NoFormException::what() const throw()
{
	return("Form not found so it can't be created!");
}