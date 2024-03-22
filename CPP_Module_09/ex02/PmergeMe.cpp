/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:14:10 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/22 18:22:37 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool PmergeMe::ValidateInput(char **input)
{
	unsigned int i = 1;
	
	while (input[i])
	{
		std::string arg = input[i];
		for(unsigned int it = 0; arg[it]; it++)
		{
			if (!std::isdigit(arg[it]))
			{
				std::cerr << "NO NO NO NO! I SAID POSITIVE INTEGERS😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡!!!!" << std::endl;
				return false;
			}
		}
		i++;
	}
	return true;
}

void PmergeMe::fillVector(char **input)
{
	unsigned int i = 1;
	unsigned int size = 0;
	while (input[size])
		size++;
	size--;
	while (i < size)
	{
		std::pair<int, int> pair(std::atoi(input[i]), std::atoi(input[i+1]));
		_vector.push_back(pair);
		i = i + 2;
	}
	if ((size % 2) != 0)
	{
		_oddOneOut = std::atoi(input[size]);
		_even = false;
	}	
	else
		_even = true;
}

void PmergeMe::printVector(void)
{
	std::vector<std::pair<int, int> >::iterator it = _vector.begin();

	while (it != _vector.end())
	{
		std::cout << it->first << " " << it->second << " ";
		it++;
	}
	if (!_even)
		std::cout << _oddOneOut<< std::endl;
	std::cout << std::endl;
}

void PmergeMe::sortPairs(void)
{
	std::vector<std::pair<int, int> >::iterator it = _vector.begin();

	while (it != _vector.end())
	{
		if (it->first > it->second)
			std::swap(it->first, it->second);
		it++;
	}
}

bool PmergeMe::SortedLargestNum(void)
{
	std::vector<std::pair<int, int> >::iterator it = _vector.begin();
	std::vector<std::pair<int, int> >::iterator ite = _vector.begin();
	
	while (it != _vector.end())
	{
		ite++;
		if (ite == _vector.end())
			break ;
		if (it->second > ite->second)
			return false;
		it++;
	}
	return true;
}

void PmergeMe::SortLargestNum(void)
{
	std::vector<std::pair<int, int> >::iterator it = _vector.begin();
	std::vector<std::pair<int, int> >::iterator ite = _vector.begin();

	while (it != _vector.end())
	{
		ite++;
		if (ite == _vector.end())
			break ;
		if (it->second > ite->second)
			std::swap(*it, *ite);
		it++;
	}
	if (!SortedLargestNum())
		SortLargestNum();
}

void PmergeMe::sortVector(void)
{
	sortPairs();
	SortLargestNum();
	insertSmaller();
}

void PmergeMe::insertSmaller(void)
{
	std::vector<std::pair<int, int> >::iterator it = _vector.begin();
	
	while (it != _vector.end())
	{
		_sorted.push_back(it->second);
		it++;
	}
	it = _vector.begin();
	while (it != _vector.end())
	{
		std::vector<int>::iterator spot = lower_bound(_sorted.begin(), _sorted.end(), it->first);
		_sorted.insert(spot, it->first);
		it++;
	}
	if (!_even)
	{
		std::vector<int>::iterator spot = lower_bound(_sorted.begin(), _sorted.end(), _oddOneOut);
		_sorted.insert(spot, _oddOneOut);
	}
	std::vector<int>::iterator ite = _sorted.begin();
	while (ite != _sorted.end())
	{
		std::cout << *ite << " ";
		ite++;
	}
	std::cout << std::endl;
}