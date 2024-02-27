/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:07:18 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/27 12:47:13 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << "A has been generated!" << std::endl;
			return(new A());
			break ;
		case 1:
			std::cout << "B has been generated!" << std::endl;
			return(new B());
			break ;
		case 2:
			std::cout << "C has been generated!" << std::endl;
			return(new C());
			break ;
		default:
			std::cerr << "Pox ouch boom boom your generator has exploded!" << std::endl;
	}
	return (0);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointer: C" << std::endl;
	else
		std::cerr << "Pointer is NULL" << std::endl;
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Reference: A" << std::endl;
	}
	catch (std::exception & e){}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Reference: B" << std::endl;
	}
	catch (std::exception & e){}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Reference: C" << std::endl;
	}
	catch (std::exception & e){}
}

int main()
{
	Base *p;
	
	int i = 1;
	while (i <= 10)
	{
		std::cout << "Round " << i << std::endl;
		
		p = generate();
		identify(p);
		identify(*p);
		delete p;
		i++;
	}
}