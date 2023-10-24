/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:48:32 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/24 19:32:17 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif