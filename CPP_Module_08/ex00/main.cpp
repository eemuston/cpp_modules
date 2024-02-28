/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:40:15 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/28 16:02:03 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main(void)
{
	std::list<int> container;
	int i = 0;
	int j = 0;
	
	container.push_back(100);
	container.push_back(200);
	container.push_back(300);
	 
	std::list<int>::const_iterator it = container.end();
	
	try
	{
		i = ::easyfind(container, 100);
		std::cout << i << " found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	it = container.end();
	try
	{
		j = ::easyfind(container, 101);
		std::cout << j << "found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}