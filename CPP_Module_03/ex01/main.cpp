/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:02:09 by eemuston          #+#    #+#             */
/*   Updated: 2023/11/20 20:12:13 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Matti");
	ScavTrap b("Teppo");
	

	std::cout << "ScavTrap " << a.getName() << " has " << a.getHitPoints() << " HP." << std::endl;
	a.takeDamage(20);
	std::cout << "ScavTrap " << a.getName() << " now has " << a.getHitPoints() << " HP." << std::endl;
	a.guardGate();

	b.attack("Matti");
	std::cout << "Hitpoints of Teppo: " << b.getHitPoints() << std::endl;
	b.takeDamage(5);
	std::cout << "Hitpoints of Teppo: " << b.getHitPoints() << std::endl;
	b.beRepaired(50);
	std::cout << "Hitpoints of Teppo: " << b.getHitPoints() << std::endl;
	
	return (0);
}