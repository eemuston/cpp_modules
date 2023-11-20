/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:02:09 by eemuston          #+#    #+#             */
/*   Updated: 2023/11/20 20:30:42 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("Matti");
	FragTrap b("Teppo");
	

	std::cout << "FragTrap " << a.getName() << " has " << a.getHitPoints() << " HP." << std::endl;
	a.takeDamage(20);
	std::cout << "FragTrap " << a.getName() << " now has " << a.getHitPoints() << " HP." << std::endl;
	a.highFivesGuys();

	b.attack("Matti");
	std::cout << "Hitpoints of Teppo: " << b.getHitPoints() << std::endl;
	b.takeDamage(5);
	std::cout << "Hitpoints of Teppo: " << b.getHitPoints() << std::endl;
	b.beRepaired(50);
	std::cout << "Hitpoints of Teppo: " << b.getHitPoints() << std::endl;
	
	return (0);
}