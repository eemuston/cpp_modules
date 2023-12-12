/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:41:32 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/12 19:05:03 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &src);
		~Cure(void);
		Cure &operator=(Cure const &rhs);

		AMateria* clone() const;
		void use(ICharacter& target);
		std::string const &getType(void) const;
	private:
		std::string _type;	
};

#endif