/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:02:09 by eemuston          #+#    #+#             */
/*   Updated: 2023/11/20 19:08:08 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Matti");
	ClapTrap b("Teppo");

	a.attack("Teppo");
	a.takeDamage(5);
	a.beRepaired(5);
	a.takeDamage(100);
	a.attack("Teppo");
	
	std::cout << "Energypoints of Teppo: " << b.getEnergypoints() << std::endl;
	b.attack("Matti");
	b.takeDamage(5);
	b.beRepaired(5);
	std::cout << "Energypoints of Teppo: " << b.getEnergypoints() << std::endl;
	
	return (0);
}