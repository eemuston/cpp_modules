/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:41:37 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/11 15:05:42 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &src);
		~Ice(void);
		Ice &operator=(Ice const &rhs);

		AMateria* clone() const;
		void use(ICharacter& target);
		std::string const &getType(void) const;
	private:
		std::string _type;	
};

#endif