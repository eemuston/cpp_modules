/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:39:22 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/12 18:58:33 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			_materia[i] = rhs._materia[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != NULL && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (NULL);
}