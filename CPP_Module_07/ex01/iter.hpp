/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:24:52 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/27 17:43:10 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int length, void (*f)(T &))
{
	int i = 0;
	while (i < length)
	{
		f(array[i]);
		i++;
	}
}

template<typename T>
void	iter(const T *array, int length, void (*f)(const T &))
{
	int i = 0;
	while (i < length)
	{
		f(array[i]);
		i++;
	}
}


#endif