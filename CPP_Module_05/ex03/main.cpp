/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:21 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 19:54:09 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try{
		Bureaucrat Pekka("Pekka", 1);	
		Bureaucrat Terho("Terho", 20);
		Intern randomIntern;
		Intern randomIntern1;
		AForm* form;
		AForm* form1;
		
		form = randomIntern.makeForm("presidential pardon", "Jussi");
		form1 = randomIntern.makeForm("presidential pardon", "Jussi");
		std::cout << "########################################" << std::endl;

		try{
			std::cout << Pekka;
			std::cout << *form;

			std::cout << *form;

			Pekka.signForm(*form);

			std::cout << *form;

			Pekka.executeForm(*form);

			std::cout << *form;

			std::cout << "########################################" << std::endl;

			std::cout << Terho;
			std::cout << *form1;

			Terho.executeForm(*form1);

			std::cout << *form1;

			Terho.signForm(*form1);

			std::cout << *form1;

			Terho.executeForm(*form1);

			std::cout << *form1;

		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "########################################" << std::endl;
		delete form;
		delete form1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "########################################" << std::endl;
		
		Bureaucrat Keijo("Keijo", 42);
		Intern	randomIntern;
		AForm*	form2;
		
		form2 = randomIntern.makeForm("robotomy request", "Mikko");

		try{
			std::cout << Keijo;
			std::cout << *form2;

			Keijo.executeForm(*form2);

			std::cout << *form2;

			Keijo.signForm(*form2);

			std::cout << *form2;

			Keijo.executeForm(*form2);

			std::cout << *form2;

			Keijo.executeForm(*form2);
			Keijo.executeForm(*form2);
			Keijo.executeForm(*form2);
			Keijo.executeForm(*form2);

		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "########################################" << std::endl;
		delete form2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "########################################" << std::endl;
		
		Bureaucrat Alexander("Alexander", 45);
		Intern	randomIntern;
		AForm*	form3;
		
		form3 = randomIntern.makeForm("shrubbery creation", "Jusa");

		try{
			std::cout << Alexander;
			std::cout << *form3;

			Alexander.executeForm(*form3);

			std::cout << *form3;

			Alexander.signForm(*form3);

			std::cout << *form3;

			Alexander.executeForm(*form3);

			std::cout << *form3;

		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "########################################" << std::endl;
		delete form3;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "########################################" << std::endl;
		Intern Random;
		AForm *form;

		form = Random.makeForm("shrubberfdsfdsf",  "hahah");

		std::cout << *form;
		std::cout << "########################################" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}