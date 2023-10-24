/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:16:03 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/24 19:32:58 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 4;
	int i = 0;

	Zombie *zombiehorde = zombieHorde(N, "Jussi-Kalle");
	while (i < N)
	{
		zombiehorde[i].announce();
		i++;
	}
	delete[] zombiehorde;
}