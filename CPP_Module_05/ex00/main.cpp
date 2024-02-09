/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:46:29 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/09 17:46:05 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *jusa = new Bureaucrat("Jussi", 1);
	Bureaucrat *masa = new Bureaucrat("Matti", 150);

	std::cout << *jusa;

	jusa->incrementGrade();

	std::cout << *jusa;

	jusa->incrementGrade();

	std::cout << *jusa;
	
	jusa->decrementGrade();

	std::cout << *jusa;

	delete jusa;

	std::cout << *masa;

	masa->decrementGrade();

	std::cout << *masa;

	masa->decrementGrade();

	std::cout << *masa;

	masa->incrementGrade();

	std::cout << *masa;

	delete masa;
	return (0);
}
