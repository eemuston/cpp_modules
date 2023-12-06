/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:02:06 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/06 16:51:29 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &rhs);
				
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int  getEnergyPoints(void) const;
		int  getHitPoints(void) const;
		int  getAttackDamage(void) const;
		std::string getName(void) const;
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;	
};

#endif