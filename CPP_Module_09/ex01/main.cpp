/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:33:06 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/26 16:57:13 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		RPN rpn;
		rpn.ValidateInput(argv[1]);
		return (0);
	}
	std::cout << "Usage ./RPN [operands and operators]"	<< std::endl;
	return (-1);
}