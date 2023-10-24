/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:14:42 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/24 19:28:35 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	
	int i = 0;
	Zombie* zombieHorde = new Zombie[N];
	while (i < N)
	{
		zombieHorde[i].setName(name);
		i++;
	}
	return (zombieHorde);
}