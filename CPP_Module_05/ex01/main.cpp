/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:46:29 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/09 20:28:50 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Matti("Matti", 1);
		Form Koodari("Tietoevry Contract", 120, 120);

		std::cout << Matti;

		std::cout << Koodari;

		Matti.signForm(Koodari);

		std::cout << Koodari;

		Matti.signForm(Koodari);

		std::cout << Koodari;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Eemeli("Eemeli", 130);
		Form Coder("Supercell Contract", 100, 100);

		std::cout << Eemeli;

		std::cout << Coder;

		Eemeli.signForm(Coder);

		std::cout << Coder;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
