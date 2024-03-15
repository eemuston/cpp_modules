/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:45:02 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/15 10:45:42 by eemuston         ###   ########.fr       */
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
		
	public:
	
		void calcutateExchangeRate(std::string inputfile);
		void csv_parser(void);
		time_t stringToTime(std::string date);
		std::string timeToDate(time_t date);
		double stringToDouble(std::string value);
		void printValue(time_t date, double value);
};

#endif