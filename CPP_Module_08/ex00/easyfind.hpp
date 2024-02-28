/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:27:46 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/28 16:01:05 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Bro who are you tryna fool with giving me these random ass items to find!!");
		}
};

template<typename T>
int easyfind(T &container, int num)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw NotFoundException();
	return (*it);
}

#endif