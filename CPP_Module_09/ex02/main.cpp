/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:13:23 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/22 18:22:32 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Usage: ./PmergeMe [positive integers]" << std::endl;
		return (-1);
	}
	PmergeMe pm;
	if (pm.ValidateInput(argv))
	{
		pm.fillVector(argv);
		pm.printVector();
		std::cout << "************" << std::endl;
		pm.sortVector();
	}
	return (0);
}