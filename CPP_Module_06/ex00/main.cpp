/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:33:42 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/26 14:14:24 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ScalarConverter converter;
		converter.convert(argv[1]);
	}
	else
		std::cout << "Usage: ./convert [parameter]" << std::endl;
	return (0);
}