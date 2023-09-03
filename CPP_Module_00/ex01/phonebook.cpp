/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:28:59 by eemuston          #+#    #+#             */
/*   Updated: 2023/09/03 19:32:09 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string	str;

	std::cout << "Welcome to the Phonebook!" << std::endl;
	while (str != "EXIT")
	{
		std::cout << "Do you wanna ADD, SEARCH or EXIT?: ";
		std::getline(std::cin, str);
	}
	std::cout << "See you soon!" << std::endl;
	return (0);
}
