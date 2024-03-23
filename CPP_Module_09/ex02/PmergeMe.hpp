/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:13:49 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/23 17:52:18 by eemuston         ###   ########.fr       */
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

		PmergeMe(PmergeMe const & src);
		PmergeMe & operator=(PmergeMe const & src);

		void fillVector(char **input);
		void sortVector(void);
		void printVector(void);
		void sortPairsVector(void);
		void SortLargestNumVector(void);
		bool SortedLargestNumVector(void);
		void insertSmallerVector(void);
		
		void fillDeque(char **input);
		void sortDeque(void);
		//void printDeque(void);
		void sortPairsDeque(void);
		void SortLargestNumDeque(void);
		bool SortedLargestNumDeque(void);
		void insertSmallerDeque(void);
	public:
		PmergeMe(void);
		~PmergeMe(void);
		
		bool ValidateInput(char **input);
		void callVector(char **input);
		void callDeque(char **input);
};

#endif