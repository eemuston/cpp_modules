/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:13:58 by eemuston          #+#    #+#             */
/*   Updated: 2023/11/22 10:15:05 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}