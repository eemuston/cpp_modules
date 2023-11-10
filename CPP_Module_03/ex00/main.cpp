/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:02:09 by eemuston          #+#    #+#             */
/*   Updated: 2023/11/10 13:10:09 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrap");
	ClapTrap b("ClapTrap");

	a.attack("ClapTrap");
	a.takeDamage(5);
	a.beRepaired(5);
	
	b.attack("ClapTrap");
	b.takeDamage(5);
	b.beRepaired(5);
	
	return (0);
}