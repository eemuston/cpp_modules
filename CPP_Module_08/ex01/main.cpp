/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:04:06 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/29 12:35:14 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{
		Span list(8);
		list.addNumber(143);
		list.addNumber(45);
		list.addNumber(33);
		list.addNumber(43);
		list.addNumber(502);
		list.addNumber(60);
		list.addNumber(1543);
		list.addNumber(342);
		
		int shortestSpan;
		int longestSpan;

		shortestSpan = list.shortestSpan();
		longestSpan = list.longestSpan();

		std::cout << "Shortestspan: " << shortestSpan << std::endl;
		std::cout << "Longestspan: " << longestSpan << std::endl;
		list.addNumber(2);
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try{
		Span list(8);
		
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
	try{
		//testofaddnumbers
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	return (0);
}