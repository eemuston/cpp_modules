/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:04:19 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/29 11:15:41 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>

class Span
{
	private:
		unsigned int	_size;
		std::list<int> 	_list;
		unsigned int 	_spaceUsed;
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const &src);
		Span &operator=(Span const &src);
		~Span(void);
		

		void	addNumber(int number);
		int		shortestSpan(void);
		int		longestSpan(void);

		class SpanFullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class SpanTooShortException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif