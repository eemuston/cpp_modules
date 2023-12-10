/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:12:42 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/05 22:57:09 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*src.getBrain());
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs) {
		this->~Cat();
		this->brain = new Brain(*rhs.getBrain());
		this->Animal::operator=(rhs);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->brain);
}