/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:04:27 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/26 15:19:53 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
	(void)src;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{}

bool ScalarConverter::isChar(std::string src)
{
	if (src.length() == 1 && !isdigit(src[0]))
		return (true);
	return (false);
}

bool ScalarConverter::isInt(std::string src)
{
	int i = 0;
	
	if (i == 0 && (src[i] == '-' || src[i] == '+'))
		i++;
	while (src[i])
	{
		if (!isdigit(src[i]))
			return (false);
		i++;
	}
	return (true);
}

bool ScalarConverter::isFloat(std::string src)
{
	int i = 0;
	bool dot = false;
	bool f = false;
	
	if (i == 0 && (src[i] == '-' || src[i] == '+'))
		i++;
	while (src[i])
	{
		if (src[i] == '.' && dot == false)
			dot = true;
		else if (src[i] == 'f' && f == false)
			f = true;
		else if (!isdigit(src[i]))
			return (false);
		i++;
	}
	if (dot == true && f == true)
		return (true);
	return (false);
}

bool ScalarConverter::isDouble(std::string src)
{
	int i = 0;
	bool dot = false;
	
	if (i == 0 && (src[i] == '-' || src[i] == '+'))
		i++;
	while (src[i])
	{
		if (src[i] == '.' && dot == false)
			dot = true;
		else if (!isdigit(src[i]))
			return (false);
		i++;
	}
	if (dot == true)
		return (true);
	return (false);
}

bool ScalarConverter::isPseudo(std::string src)
{
	if (src == "+inff" || src == "-inff" || src == "+inf" || src == "-inf" || src == "nanf" || src == "nan")
		return (true);
	return(false);
}

int ScalarConverter::checkType(std::string src)
{
	if(isChar(src))
		return (CHAR);
	else if(isInt(src))
		return (INT);
	else if(isFloat(src))
		return (FLOAT);
	else if(isDouble(src))
		return (DOUBLE);
	else if(isPseudo(src))
		return (PSEUDO);
	return (0);
}

void ScalarConverter::printChar(char converted, long double src)
{
	std::cout << "char: ";
	if (src > CHAR_MAX || src < CHAR_MIN)
		std::cout << "impossible" << std::endl;
	else if (isprint(converted))
		std::cout << "'" << converted << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void ScalarConverter::printInt(int converted, long double src)
{
	std::cout << "int: ";
	if (src > INT_MAX || src < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << converted << std::endl;
}

void ScalarConverter::printFloat(float converted, long double src)
{
	std::cout << "float: ";
	if (src > FLT_MAX || src < -FLT_MAX)
		std::cout << "impossible" << std::endl;
	else 
	{
		if (converted - static_cast<int>(converted) == 0)
			std::cout << converted << ".0f" << std::endl;
		else
			std::cout << converted << "f" << std::endl;
	}
}

void ScalarConverter::printDouble(double converted, long double src)
{
	std::cout << "double: ";
	if (src > DBL_MAX || src < -DBL_MAX)
		std::cout << "impossible" << std::endl;
	else
	{
		if (converted - static_cast<int>(converted) == 0)
			std::cout << converted << ".0" << std::endl;
		else
			std::cout << converted << std::endl;
	}
}

void ScalarConverter::printPseudo(std::string src)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << src << "f" << std::endl;
	std::cout << "double: " << src << std::endl;
}

void  ScalarConverter::print(long double src)
{
	printChar(static_cast<char>(src), src);
	printInt(static_cast<int>(src), src);
	printFloat(static_cast<float>(src), src);
	printDouble(static_cast<double>(src), src);
}

void ScalarConverter::convert(std::string src)
{
	_type = checkType(src);
	
	if (src.length() > 4912)
		_type = 0;
	switch(_type)
	{
		case 1:
			print(src[0]);
			break ;
		case 2:
			print(std::stold(src));
			break ;
		case 3:
			print(std::stold(src));
			break ;
		case 4:
			print(std::stold(src));
			break ;
		case 5:
			printPseudo(src);
			break ;
		default:
			std::cout << "Can't be converted" << std::endl;
	}
}

