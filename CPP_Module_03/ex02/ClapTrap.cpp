/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:02:04 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/06 16:58:42 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead so it can't attack!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points to attack!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead so it can't take damage!" << std::endl;
		return ;
	}
	_hitPoints = _hitPoints - amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has been killed!" << std::endl;
		return ;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead so it can't be repaired!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points to repair!" << std::endl;
		return ;
	}
	_energyPoints--;
	_hitPoints = _hitPoints + amount;
	std::cout << "ClapTrap " << this->_name << " is repaired " << amount << " points of damage!" << std::endl;
	return ;
}

int		ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int		ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int		ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}