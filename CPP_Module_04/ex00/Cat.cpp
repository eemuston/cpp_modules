/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:12:42 by eemuston          #+#    #+#             */
/*   Updated: 2023/11/22 10:13:54 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}