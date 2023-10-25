/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:54:42 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/25 17:12:16 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie : " << this->_name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie : " << this->_name << " destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}