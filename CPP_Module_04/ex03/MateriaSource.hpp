/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:39:33 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/11 15:40:39 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);
		MateriaSource &operator=(MateriaSource const &rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria	*_materia[4];
		int			_count;
	
};
#endif