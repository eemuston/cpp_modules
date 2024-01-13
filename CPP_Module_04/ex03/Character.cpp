/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:32:07 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/18 10:09:05 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(Character const & src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
}

Character & Character::operator=(Character const & rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
			_materia[i] = rhs._materia[i];
	}
	return (*this);
}

std::string const & Character::getName(void) const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _materia[idx] != NULL)
		_materia[idx]->use(target);
}