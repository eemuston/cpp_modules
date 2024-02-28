/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:30:08 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/28 12:19:03 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template<class T>
Array<T>::Array(void) : _array(NULL), _size(0)
{
	
}

template<class T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[n];
}

template<class T>
Array<T>::Array(Array const &src) : _size(src._size)
{
	_array = new T[_size];
	unsigned int i = 0;
	while (i < _size)
	{
		_array[i] = src._array[i];
		i++;
	}
}

template<class T>
Array<T> &Array<T>::operator=(Array const &src)
{
	_size = src._size;
	delete[] _array;
	_array = new T[_size];
	unsigned int i = 0;
	while (i < _size)
	{
		_array[i] = src._array[i];
		i++;
	}
	return (*this);
}

template<class T>
Array<T>::~Array(void)
{
	if (_array)
		delete[] _array;
}

template<class T>
T &Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw IndexOutOfBoundsException();
	return(_array[i]);	
}

template<class T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return ("Index out of bounds!");
}

#endif