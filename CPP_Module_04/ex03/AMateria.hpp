/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:12:37 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/11 15:56:42 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
		unsigned int _xp;
	public:
	AMateria(std::string const & type);
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;	
	virtual void use(ICharacter& target);
};

#endif