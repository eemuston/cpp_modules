/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:04:24 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/26 14:00:05 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include <float.h>

class ScalarConverter
{
	private:
		int _type;
		

		int checkType(std::string src);
		bool isChar(std::string src);
		bool isInt(std::string src);
		bool isFloat(std::string src);
		bool isDouble(std::string src);
		bool isPseudo(std::string src);

		void print(long double src);
		void printChar(char converted, long double src);
		void printInt(int converted, long double src);
		void printFloat(float converted, long double src);
		void printDouble(double converted, long double src);
		void printPseudo(std::string src);
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &src);
		
		void convert(std::string src);
};

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define PSEUDO 5

#endif