/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:13:49 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/22 18:02:29 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>

class PmergeMe
{
	private:
		std::vector<std::pair<int, int> > _vector;
		std::vector<int> _sorted;
		int _oddOneOut;
		bool _even;
	public:
		bool ValidateInput(char **input);
		void fillVector(char **input);
		void printVector(void);
		void sortPairs(void);
		void sortVector(void);
		void SortLargestNum(void);
		bool SortedLargestNum(void);
		void insertSmaller(void);
};

#endif