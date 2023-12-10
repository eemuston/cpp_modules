/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:30:05 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/10 11:45:50 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea";
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &src) 
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.getIdeas(i);
	}
	return (*this);
}

std::string	Brain::getIdeas(int i) const
{
	return (this->ideas[i]);
}

void		Brain::setIdeas(int i, std::string idea)
{
	this->ideas[i] = idea;
}

void	Brain::printIdeas(void)
{
	for (int i = 0; i < 5; i++)
		std::cout << this->ideas[i] << std::endl;
}