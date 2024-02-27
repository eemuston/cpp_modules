/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:00:03 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/27 17:58:28 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void print(T &a)
{
	std::cout << a << " ";
}

template<typename T>
void increment(T &b)
{
	b++;
}

int main(void)
{
	int array[5] = {1 ,2 ,3 ,4 ,5};
	
	std::cout << "int array" << std::endl;
	iter(array, 5, ::print);
	std::cout << std::endl;
	iter(array, 5, ::increment);
	std::cout << "int array after incrementation" << std::endl;
	iter(array, 5, ::print);
	std::cout << std::endl;

	double dbl_array[5] = {1.1 ,2.1 ,3.1 ,4.1 ,5.1};
	
	std::cout << "double array" << std::endl;
	iter(dbl_array, 5, ::print);
	std::cout << std::endl;
	iter(dbl_array, 5, ::increment);
	std::cout << "double array after incrementation" << std::endl;
	iter(dbl_array, 5, ::print);
	std::cout << std::endl;
	
	char char_array[5] = {'a' ,'b' ,'c' ,'d' ,'e'};
	
	std::cout << "char array" << std::endl;
	iter(char_array, 5, ::print);
	std::cout << std::endl;
	iter(char_array, 5, ::increment);
	std::cout << "char array after incrementation" << std::endl;
	iter(char_array, 5, ::print);
	std::cout << std::endl;
}