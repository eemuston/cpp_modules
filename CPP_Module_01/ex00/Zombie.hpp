/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:48:32 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/24 19:03:25 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
	private:
		std::string	_name;
};

#endif