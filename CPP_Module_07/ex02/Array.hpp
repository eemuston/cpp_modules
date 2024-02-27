/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:30:25 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/27 18:38:34 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<class T>
class Array
{
	private:
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &copy);
		Array &operator=(Array const &src);
		~Array(void);
};

#endif