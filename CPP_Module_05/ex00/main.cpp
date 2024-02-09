/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:46:29 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/09 18:26:37 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try{
		Bureaucrat jusa("Jussi", 1);
		
		std::cout << jusa;

		jusa.incrementGrade();

		std::cout << jusa;

		jusa.incrementGrade();

		std::cout << jusa;
		
		jusa.decrementGrade();

		std::cout << jusa;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat masa("Matti", 150);
		
		std::cout << masa;

		masa.decrementGrade();

		std::cout << masa;

		masa.decrementGrade();

		std::cout << masa;

		masa.incrementGrade();

		std::cout << masa;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat default_bureaucrat;

		std::cout << default_bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
