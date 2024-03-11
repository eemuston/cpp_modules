/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 01:37:49 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/11 06:00:17 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void calcutateExchangeRate(std::string inputfile)
{
	std::ifstream file(inputfile);
	if(!file.is_open())
	{
		std::cout << "WATAFAK!" << std::endl;
		return ;
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		
	}
}