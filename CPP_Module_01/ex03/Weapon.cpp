/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:06:11 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/25 18:12:24 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
	
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string&	Weapon::getType(void)
{
	const std::string& ref = _type;
	return (ref);
}