/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:04:06 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/29 12:24:25 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span list(100);

	try{
		list.addNumber(100000000);
		list.addNumber(200000000);
		list.addNumber(300000000);
		list.addNumber(400000000);
		list.addNumber(500000000);
		list.addNumber(600000000);
		list.addNumber(1000000000);
		list.addNumber(1000000000);
		
		int shortestSpan;
		int longestSpan;

		shortestSpan = list.shortestSpan();
		longestSpan = list.longestSpan();

		std::cout << "Shortestspan: " << shortestSpan << std::endl;
		std::cout << "Longestspan: " << longestSpan << std::endl;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	return (0);
}