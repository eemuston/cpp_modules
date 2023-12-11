/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:40:05 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/11 15:29:51 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

std::string const &Ice::getType(void) const
{
	return (this->_type);
}