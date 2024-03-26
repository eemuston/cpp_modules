/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:33:15 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/26 16:56:00 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
		private:
			void ReversePolishNotation(std::string input);
			
			RPN(RPN const & src);
			RPN & operator=(RPN const & src);
		public:
			RPN(void);
			~RPN(void);
			
			void ValidateInput(std::string input);
};

#endif