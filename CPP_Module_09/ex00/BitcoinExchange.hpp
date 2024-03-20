/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:45:02 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/20 12:47:51 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <string>
# include <sstream>

class BitcoinExchange
{
	private:
		std::map<time_t, double> values;
		
		void csv_parser(void);
		time_t stringToTime(std::string date);
		std::string timeToDate(time_t date);
		double stringToDouble(std::string value);
		void printValue(time_t date, double value);
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange & operator=(const BitcoinExchange & src);


		void calcutateExchangeRate(std::string inputfile);

		class InvalidFileException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class BadInputException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class BadValueException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif