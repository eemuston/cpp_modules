/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:13:49 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/27 17:43:29 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>

class PmergeMe
{
	private:
		std::vector<std::pair<int, int> >	_vector;
		std::vector<int>					_sortedVector;
		std::deque<std::pair<int, int> >	_deque;
		std::deque<int>						_sortedDeque;
		int									_oddOneOut;
		bool								_even;
		unsigned int						_size;
		int									_len;

		PmergeMe(PmergeMe const & src);
		PmergeMe & operator=(PmergeMe const & src);

		void printPresorted(char **input);

		void callVector(char **input);
		void fillVector(char **input);
		void sortVector(void);
		void sortPairsVector(void);
		void SortLargestNumVector(int len);
		void insertSmallerVector(void);
		void printSortedVector(void);
		
		void callDeque(char **input);
		void fillDeque(char **input);
		void sortDeque(void);
		void sortPairsDeque(void);
		void SortLargestNumDeque(int len);
		void insertSmallerDeque(void);
		void printSortedDeque(void);
	public:
		PmergeMe(void);
		~PmergeMe(void);
		
		bool ValidateInput(char **input);
};

#endif