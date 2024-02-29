/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:04:12 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/29 18:32:24 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0), _spaceUsed(0)
{
	
}

Span::Span(unsigned int N) : _size(N), _spaceUsed(0)
{
}

Span::Span(Span const &src) : _size(src._size), _list(src._list), _spaceUsed(src._spaceUsed)
{
	*this = src;		
}

Span &Span::operator=(Span const &src)
{
	_size = src._size;
	_list = src._list;
	_spaceUsed = src._spaceUsed;
	return (*this);
}

Span::~Span(void)
{
	
}

const char *Span::SpanFullException::what() const throw()
{
	return("Span is full!");
}

const char *Span::SpanTooShortException::what() const throw()
{
	return("Span only has one item or it's empty!");
}

void Span::addNumber(int number)
{
	if (_spaceUsed >= _size)
		throw SpanFullException();
	_list.push_back(number);
	_spaceUsed++;
}

void Span::addNumbers(int smallest, int range, int amount)
{
	int i = 0;
	int num;
	srand((unsigned) time(NULL));
	while (i < amount)
	{
		num = smallest + (rand() % range);
		addNumber(num);
		i++;
	}
}

void Span::printSpan(void)
{
	std::list<int>::iterator it = _list.begin();
	while (it != _list.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

int	Span::longestSpan(void)
{
	if (_spaceUsed < 2)
		throw SpanTooShortException();
	_list.sort();
	return (*--_list.end() - *_list.begin());
}

int	Span::shortestSpan(void)
{
	if (_spaceUsed < 2)
		throw SpanTooShortException();
	_list.sort();
	std::list<int>::iterator it = _list.begin();
	int shortestSpan = *++it - *--it;
	int temp;
	std::list<int>::iterator last = _list.end();
	last--;
	while (it != last)
	{
		temp = *++it - *--it;
		if (shortestSpan > temp)
			shortestSpan = temp;
		it++;
	}
	return (shortestSpan);
}