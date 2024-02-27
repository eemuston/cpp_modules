/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:00:27 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/27 17:06:15 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T&	min(T &a, T&b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T&	max(T &a, T&b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif