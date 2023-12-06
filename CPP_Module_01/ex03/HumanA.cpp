/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:39:48 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/06 14:43:32 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name)
{	
}

HumanA::~HumanA(void)
{
	
}

void	HumanA::attack(void)
{
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}