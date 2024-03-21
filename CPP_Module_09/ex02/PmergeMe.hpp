/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:13:49 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/21 15:09:24 by eemuston         ###   ########.fr       */
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
		int _oddOneOut;
		bool _even;
	public:
		bool ValidateInput(char **input);
		void fillVector(char **input);
		void printVector(void);
		void sortPairs(void);
		void sortVector(void);
};

#endif