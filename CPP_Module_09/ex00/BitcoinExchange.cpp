/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 01:37:49 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/27 15:36:49 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	csv_parser();
}

BitcoinExchange::~BitcoinExchange(void)
{}

void BitcoinExchange::csv_parser(void)
{
	try
	{
		std::ifstream file("data.csv");
		if(!file.is_open())
			throw InvalidFileException();
		std::string line;
		std::getline(file, line);
		if (line.compare("date,exchange_rate") != 0)
			throw BitcoinExchange::InvalidFileException();
		while (std::getline(file, line))
		{
			time_t date = stringToTime(line.substr(0, line.find(",")));
				if (date == -1)
					throw BadInputException();
			double value = stringToDouble(line.substr(line.find(",") + 1));
				if (value == -1)
					throw BadInputException();
			values.insert(std::pair<time_t, double>(date, value));
		}
		file.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void BitcoinExchange::calcutateExchangeRate(std::string inputfile)
{
	std::ifstream file(inputfile);
	if(!file.is_open())
	{
		throw InvalidFileException();
	}
	std::string line;
	std::getline(file, line);
	if (line.compare("date | value") != 0)
			std::cout << "The title is not correct in the inputfile which might cause issues." << std::endl;
	while (std::getline(file, line))
	{
		time_t date;
		double value;
		try
		{
			date = stringToTime(line.substr(0, line.find(" |")));
			value = stringToDouble(line.substr(line.find("|") + 1));
		}
		catch(const std::exception& e)
		{
			std::cout << "Bad input!" << std::endl;
			continue;
		}
		if (date == -1)
			std::cout << "Bad input!" << std::endl;
		else
			printValue(date, value);
	}
	file.close();
}

void BitcoinExchange::printValue(time_t date, double value)
{
	std::map<time_t, double>::iterator closestDate = values.lower_bound(date);
	double closestValue = closestDate->second;
	if (closestDate == values.begin() && date < closestDate->first)
		closestValue = 0;
	else if (closestDate->first != date)
		closestValue = std::prev(closestDate)->second;
	if (value > 0 && value < 1000)
	{
			std::cout << timeToDate(date) << " => " << value << " = " << closestValue * value << std::endl;
	}
	else if (value <= 0) {
			std::cerr << "Negative number!"<< std::endl;
	}
	else if (value >= 1000) {
			std::cerr << "Too big number" << std::endl;
		}
}

time_t BitcoinExchange::stringToTime(std::string date)
{
	std::tm tm = {};
	std::istringstream strstream(date);
	strstream >> std::get_time(&tm, "%Y-%m-%d");
	if (strstream.fail())
		return -1;
	time_t time = mktime(&tm);
	std::string const temp = timeToDate(time);
	if (temp.compare(date))
		return (-1);
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
		throw BadValueException();
	return (num);
}

char const *BitcoinExchange::InvalidFileException::what() const throw()
{
	return ("File is invalid!");
}

char const *BitcoinExchange::BadInputException::what() const throw()
{
	return ("Bad Input!");
}

char const *BitcoinExchange::BadValueException::what() const throw()
{
	return ("Bad Value!");
}