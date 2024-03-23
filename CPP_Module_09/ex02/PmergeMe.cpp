/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:14:10 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/23 17:49:12 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{}

PmergeMe::~PmergeMe(void)
{}

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
				std::cerr << "Error: NO NO NO NO! I SAID POSITIVE INTEGERS😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡😡!!!!" << std::endl;
				return false;
			}
		}
		int num = std::atoi(input[i]);
		if (num < 0)
		{
			std::cerr << "Error: Larger than INT MAX!" << std::endl;
			return false;
		}
		i++;
	}
	return true;
}

//VECTOR FUNCTIONS!

void PmergeMe::callVector(char **input)
{
	_even = true;
	std::chrono::high_resolution_clock::time_point start, end;
	std::chrono::duration<double, std::micro> duration;
	start = std::chrono::high_resolution_clock::now();
	fillVector(input);
	std::cout << "Before: ";
	printVector();
	std::cout << "After:  ";
	sortVector();
	end = std::chrono::high_resolution_clock::now();
	duration = end - start;
	std::cout << "Time to process a range of " << _size << " elements with std::vector : " << duration.count() << " us" << std::endl;
}

void PmergeMe::fillVector(char **input)
{
	unsigned int i = 1;
	_size = 0;
	while (input[_size])
		_size++;
	_size--;
	while (i < _size)
	{
		std::pair<int, int> pair(std::atoi(input[i]), std::atoi(input[i+1]));
		_vector.push_back(pair);
		i = i + 2;
	}
	if ((_size % 2) != 0)
	{
		_oddOneOut = std::atoi(input[_size]);
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
		std::cout << _oddOneOut;
	std::cout << std::endl;
}

void PmergeMe::sortPairsVector(void)
{
	std::vector<std::pair<int, int> >::iterator it = _vector.begin();

	while (it != _vector.end())
	{
		if (it->first > it->second)
			std::swap(it->first, it->second);
		it++;
	}
}

bool PmergeMe::SortedLargestNumVector(void)
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

void PmergeMe::SortLargestNumVector(void)
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
	if (!SortedLargestNumVector())
		SortLargestNumVector();
}

void PmergeMe::sortVector(void)
{
	sortPairsVector();
	SortLargestNumVector();
	insertSmallerVector();
}

void PmergeMe::insertSmallerVector(void)
{
	std::vector<std::pair<int, int> >::iterator it = _vector.begin();
	
	while (it != _vector.end())
	{
		_sortedVector.push_back(it->second);
		it++;
	}
	it = _vector.begin();
	while (it != _vector.end())
	{
		std::vector<int>::iterator spot = lower_bound(_sortedVector.begin(), _sortedVector.end(), it->first);
		_sortedVector.insert(spot, it->first);
		it++;
	}
	if (!_even)
	{
		std::vector<int>::iterator spot = lower_bound(_sortedVector.begin(), _sortedVector.end(), _oddOneOut);
		_sortedVector.insert(spot, _oddOneOut);
	}
	std::vector<int>::iterator ite = _sortedVector.begin();
	while (ite != _sortedVector.end())
	{
		std::cout << *ite << " ";
		ite++;
	}
	std::cout << std::endl;
}

//DEQUE FUNCTIONS!

void PmergeMe::callDeque(char **input)
{
	_even = true;
	std::chrono::high_resolution_clock::time_point start, end;
	std::chrono::duration<double, std::micro> duration;
	start = std::chrono::high_resolution_clock::now();
	fillDeque(input);
	// std::cout << "Before: ";
	// printDeque();
	// std::cout << "After:  ";
	sortDeque();
	end = std::chrono::high_resolution_clock::now();
	duration = end - start;
	std::cout << "Time to process a range of " << _size << " elements with std::deque : " << duration.count() << " us" << std::endl;
}

void PmergeMe::fillDeque(char **input)
{
	unsigned int i = 1;
	_size = 0;
	while (input[_size])
		_size++;
	_size--;
	while (i < _size)
	{
		std::pair<int, int> pair(std::atoi(input[i]), std::atoi(input[i+1]));
		_deque.push_back(pair);
		i = i + 2;
	}
	if ((_size % 2) != 0)
	{
		_oddOneOut = std::atoi(input[_size]);
		_even = false;
	}	
	else
		_even = true;
}

// void PmergeMe::printDeque(void)
// {
// 	std::deque<std::pair<int, int> >::iterator it = _deque.begin();

// 	while (it != _deque.end())
// 	{
// 		std::cout << it->first << " " << it->second << " ";
// 		it++;
// 	}
// 	if (!_even)
// 		std::cout << _oddOneOut;
// 	std::cout << std::endl;
// }

void PmergeMe::sortPairsDeque(void)
{
	std::deque<std::pair<int, int> >::iterator it = _deque.begin();

	while (it != _deque.end())
	{
		if (it->first > it->second)
			std::swap(it->first, it->second);
		it++;
	}
}

bool PmergeMe::SortedLargestNumDeque(void)
{
	std::deque<std::pair<int, int> >::iterator it = _deque.begin();
	std::deque<std::pair<int, int> >::iterator ite = _deque.begin();
	
	while (it != _deque.end())
	{
		ite++;
		if (ite == _deque.end())
			break ;
		if (it->second > ite->second)
			return false;
		it++;
	}
	return true;
}

void PmergeMe::SortLargestNumDeque(void)
{
	std::deque<std::pair<int, int> >::iterator it = _deque.begin();
	std::deque<std::pair<int, int> >::iterator ite = _deque.begin();

	while (it != _deque.end())
	{
		ite++;
		if (ite == _deque.end())
			break ;
		if (it->second > ite->second)
			std::swap(*it, *ite);
		it++;
	}
	if (!SortedLargestNumDeque())
		SortLargestNumDeque();
}

void PmergeMe::sortDeque(void)
{
	sortPairsDeque();
	SortLargestNumDeque();
	insertSmallerDeque();
}

void PmergeMe::insertSmallerDeque(void)
{
	std::deque<std::pair<int, int> >::iterator it = _deque.begin();
	
	while (it != _deque.end())
	{
		_sortedDeque.push_back(it->second);
		it++;
	}
	it = _deque.begin();
	while (it != _deque.end())
	{
		std::deque<int>::iterator spot = lower_bound(_sortedDeque.begin(), _sortedDeque.end(), it->first);
		_sortedDeque.insert(spot, it->first);
		it++;
	}
	if (!_even)
	{
		std::deque<int>::iterator spot = lower_bound(_sortedDeque.begin(), _sortedDeque.end(), _oddOneOut);
		_sortedDeque.insert(spot, _oddOneOut);
	}
	// std::deque<int>::iterator ite = _sortedDeque.begin();
	// while (ite != _sortedDeque.end())
	// {
	// 	std::cout << *ite << " ";
	// 	ite++;
	// }
	// std::cout << std::endl;
}