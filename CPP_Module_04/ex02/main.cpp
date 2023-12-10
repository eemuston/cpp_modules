/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:11:03 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/10 12:07:40 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;
	
	//const Animal* k = new Animal();
	
	Dog basic;
	
	std::cout << "Setting ideas for basic" << std::endl;
	basic.getBrain()->setIdeas(0, "idea1");
	basic.getBrain()->setIdeas(1, "idea2");
	std::cout << "printing the brain of basic" << std::endl;
	basic.getBrain()->printIdeas();
	Dog tmp = basic;
	std::cout << "printing the brain of tmp" << std::endl;
	tmp.getBrain()->printIdeas();
	std::cout << "setting extra idea for tmp" << std::endl;
	tmp.getBrain()->setIdeas(2, "idea3");
	std::cout << "checking that the brain of tmp has the new idea" << std::endl;
	tmp.getBrain()->printIdeas();
	std::cout << "making sure that the brain of basic doesn't have that idea" << std::endl;
	basic.getBrain()->printIdeas();
return 0;	
}