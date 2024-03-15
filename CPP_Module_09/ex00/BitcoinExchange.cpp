/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 01:37:49 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/15 10:49:04 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void BitcoinExchange::csv_parser(void)
{
	std::ifstream file("data.csv");
	if(!file.is_open())
	{
		std::cout << "The csv file can't be opened!" << std::endl;
		return ;
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		time_t date = 0; //conversion here;

		double value = 0;//conversion here;
	}
	file.close();
}

void BitcoinExchange::calcutateExchangeRate(std::string inputfile)
{
	csv_parser();
	std::ifstream file(inputfile);
	if(!file.is_open())
	{
		std::cout << "Input file can't be opened!" << std::endl;
		return ;
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		time_t date = 0; //conversion here;

		double value = 0;//conversion here;
		printValue(date, value);
	}
	file.close();
}

void BitcoinExchange::printValue(time_t date, double value)
{
	
}

time_t BitcoinExchange::stringToTime(std::string date)
{
	std::tm tm{};
	std::istringstream strstream(date);
	strstream >> std::get_time(&tm, "%Y-%m-%d");
	if (strstream.fail())
		return -1;
	time_t time = mktime(&tm);
	return (time);
}

std::string BitcoinExchange::timeToDate(time_t date)
{
	
}

double BitcoinExchange::stringToDouble(std::string value)
{
	
}
