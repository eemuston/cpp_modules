/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:30:25 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/28 12:13:08 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>


template<class T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &copy);
		Array &operator=(Array const &src);
		~Array(void);

		T &operator[](unsigned int i) const;
		
		class IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"
#endif