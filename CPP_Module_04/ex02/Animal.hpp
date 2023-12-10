/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 05:04:06 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/10 12:07:49 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);
		Animal &operator=(Animal const &rhs);
		
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif