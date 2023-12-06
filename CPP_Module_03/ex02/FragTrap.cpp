/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:24:44 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/06 16:58:54 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src.getName())
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	_hitPoints = src.getHitPoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead so it can't attack!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points to attack!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "<< this->getName() << " wants to high five! LET'S GOOOOOOOOOOOOOO!" << std::endl;
	return ;
}