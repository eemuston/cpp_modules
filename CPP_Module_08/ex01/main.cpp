/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:04:06 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/29 13:54:27 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{
		std::cout << "*****BASIC TEST ADDING NUMBERS CHECKING THE SPANS AND OVERFILLING THE LIST*****" << std::endl;
		std::cout << std::endl;
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
		std::cout << std::endl;
		std::cout << "*****TRYING TO CHECK SPANS WITHOUT ITEMS*****" << std::endl;
		std::cout << std::endl;
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
		std::cout << std::endl;
		std::cout << "*****CREATING MULTIPLE NUMBERS AT ONCE*****" << std::endl;
		std::cout << std::endl;
		Span list(15);

		list.addNumbers(50, 51, 15);

		int shortestSpan;
		int longestSpan;
		
		list.printSpan();
		
		shortestSpan = list.shortestSpan();
		longestSpan = list.longestSpan();

		std::cout << "Shortestspan: " << shortestSpan << std::endl;
		std::cout << "Longestspan: " << longestSpan << std::endl;

		list.printSpan();
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	return (0);
}