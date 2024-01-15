/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:32:07 by eemuston          #+#    #+#             */
/*   Updated: 2024/01/15 15:07:04 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	//std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(Character const & src)
{
	//std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void)
{
	//std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != NULL)
			delete _materia[i];
	}
	for (int k = 0; k < 15; k++)
	{
		if (_unequipped[k] != NULL)
			delete _unequipped[k];
	}
}

Character & Character::operator=(Character const & rhs)
{
	//std::cout << "Character assignation operator called" << std::endl;
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
	{
		for (int i = 0; i < 15; i++)
		{
			if (_unequipped[i] == NULL)
			{
				_unequipped[i] = _materia[idx];
				break ;
			}
		}
		_materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _materia[idx] != NULL)
		_materia[idx]->use(target);
}