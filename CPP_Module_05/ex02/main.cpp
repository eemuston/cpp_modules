/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:21 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 19:52:15 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try{
		Bureaucrat Pekka("Pekka", 1);
		Bureaucrat Terho("Terho", 20);
		PresidentialPardonForm form("Matti");
		PresidentialPardonForm form1("Jesse");

		std::cout << "########################################" << std::endl;

		std::cout << Pekka;
		std::cout << form;

		Pekka.executeForm(form);

		std::cout << form;

		Pekka.signForm(form);

		std::cout << form;

		Pekka.executeForm(form);

		std::cout << form;

		std::cout << "########################################" << std::endl;

		std::cout << Terho;
		std::cout << form1;

		Terho.executeForm(form1);

		std::cout << form1;

		Terho.signForm(form1);

		std::cout << form1;

		Terho.executeForm(form1);

		std::cout << form1;

		std::cout << "########################################" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "########################################" << std::endl;
		
		Bureaucrat Keijo("Keijo", 42);
		RobotomyRequestForm form2("Petteri");

		std::cout << Keijo;
		std::cout << form2;

		Keijo.executeForm(form2);

		std::cout << form2;

		Keijo.signForm(form2);

		std::cout << form2;

		Keijo.executeForm(form2);

		std::cout << form2;

		Keijo.executeForm(form2);
		Keijo.executeForm(form2);
		Keijo.executeForm(form2);
		Keijo.executeForm(form2);

		std::cout << "########################################" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "########################################" << std::endl;
		
		Bureaucrat Alexander("Alexander", 120);
		ShrubberyCreationForm form3("Jukka");

		std::cout << Alexander;
		std::cout << form3;

		Alexander.executeForm(form3);

		std::cout << form3;

		Alexander.signForm(form3);

		std::cout << form3;

		Alexander.executeForm(form3);

		std::cout << form3;

		std::cout << "########################################" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}