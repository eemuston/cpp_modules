/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 04:55:41 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/26 06:00:45 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl			harl;
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				i = 0;

	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	std::string		level = av[1];
	while (i < 4)
	{
		if (level.compare(levels[i]) == 0)
			break ;
		i++;
	}
	switch (i)
	{
	case 0:
		harl.complain("DEBUG");
	case 1:
		harl.complain("INFO");
	case 2:
		harl.complain("WARNING");
	case 3:
		harl.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}