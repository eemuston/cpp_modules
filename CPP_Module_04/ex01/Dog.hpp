/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:14:07 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/10 11:44:07 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog(void);
		Dog &operator=(Dog const &rhs);
		
		virtual void makeSound(void) const;
		Brain *getBrain(void) const;
	private:
		Brain *brain;	
};

#endif