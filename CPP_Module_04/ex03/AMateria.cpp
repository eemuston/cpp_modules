/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:12:28 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/12 18:55:24 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
		_xp = rhs._xp;
	}
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
