/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:44:22 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/15 09:00:20 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange f;
		f.calcutateExchangeRate(argv[1]);
		return(0);
	}
	std::cout << "Usage: ./btc [input_file]" << std::endl;
	return (-1);	
}