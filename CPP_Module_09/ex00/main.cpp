/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:44:22 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/01 12:54:20 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::fstream fs;
		fs.open(argv[1], std::fstream::in);
		if (fs.fail())
		{
			std::cerr << "Failed to open the input file." << std::endl;
			return (-1);
		}
		fs.close();
		return (0);
	}
	std::cout << "Usage: ./btc [input_file]" << std::endl;
	return (-1);	
}