/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:44:22 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/20 12:16:45 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc == 2)
		{
			BitcoinExchange f;
			f.calcutateExchangeRate(argv[1]);
			return(0);
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
	std::cout << "Usage: ./btc [input_file]" << std::endl;
	return (-1);	
}