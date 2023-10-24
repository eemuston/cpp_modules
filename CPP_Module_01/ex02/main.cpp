/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:44:33 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/24 19:55:42 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string adress: " << &string << std::endl;
	std::cout << "pointer adress: " << stringPTR << std::endl;
	std::cout << "reference adress: " << &stringREF << std::endl;
	std::cout << "string value: " << string << std::endl;
	std::cout << "pointer value: " << *stringPTR << std::endl;
	std::cout << "reference value: " << stringREF << std::endl;
	return (0);
}