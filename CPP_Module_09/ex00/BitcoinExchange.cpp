/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 01:37:49 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/18 18:42:21 by eemuston         ###   ########.fr       */
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
		time_t date = stringToTime(line.substr(0, line.find(",")));
			if (date == -1)
				return ;
		double value = stringToDouble(line.substr(line.find(",") + 1));
			if (value == -1)
				return ;
		values.insert(std::pair<time_t, double>(date, value));
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
		time_t date = stringToTime(line.substr(0, line.find("|")));

		double value = stringToDouble(line.substr(line.find("|") + 1));
		
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
	char buf[80];
	strftime(buf, 80, "%Y-%m-%d", localtime(&date));
	return (buf);
}

double BitcoinExchange::stringToDouble(std::string value)
{
	std::stringstream strstream;

	strstream << value;
	double num;
	while (!(strstream >> num) || strstream.fail() || !strstream.eof())
		return (-1);
	return (num);
}
