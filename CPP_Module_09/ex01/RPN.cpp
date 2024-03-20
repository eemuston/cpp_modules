/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:34:11 by eemuston          #+#    #+#             */
/*   Updated: 2024/03/20 17:42:36 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void ValidateInput(std::string input)
{
	std::string parsedInput;
	
	unsigned long i = 0;
	unsigned int operands = 0;
	unsigned int operators = 0;
	while (i < input.length())
	{
		if ((std::isdigit(input[i]) && input[i] >= '0' && input[i] <= '9') || (input[i] == '-' || input[i] == '+' || input[i] == '/' || input[i] == '*') || std::iswspace(input[i]))
		{
			if (std::isdigit(input[i]))
				operands++;
			else if (!std::iswspace(input[i]))
			{
				if (operands > 1)
					operators++;
				else
				{
					std::cout << "Not valid input" << std::endl;
					return ;
				}
			}
			i++;
		}
		else
		{
			std::cout << "Not valid input" << std::endl;
			return ;
		}
	}
	if (operands - 1 != operators)
	{
		std::cout << "Not valid input" << std::endl;
		return ;
	}
	i--;
	while (std::iswspace(input[i]))
		i--;
	if (std::isdigit(input[i]))
	{
		std::cout << "Not valid input" << std::endl;
		return ;
	}
	ReversePolishNotation(input);
}

void ReversePolishNotation(std::string input)
{
	std::stack<double> stack;
	unsigned long i = 0;
	while (i < input.length())
	{
		if (std::isdigit(input[i]))
			stack.push(input[i] - '0');
	    else if (input[i] == '-')
		{
            double operand2 = stack.top(); stack.pop();
            double operand1 = stack.top(); stack.pop();
            stack.push(operand1 - operand2);
        }
		else if (input[i] == '+')
		{
            double operand2 = stack.top(); stack.pop();
            double operand1 = stack.top(); stack.pop();
            stack.push(operand1 + operand2);
        }
		else if (input[i] == '/')
		{
            double operand2 = stack.top(); stack.pop();
            double operand1 = stack.top(); stack.pop();
			if (operand2 == 0)
			{
				std::cout << "Division by 0 is not allowed!" << std::endl;
				return ;
			}
            stack.push(operand1 / operand2);
        }
		else if (input[i] == '*')
		{
            double operand2 = stack.top(); stack.pop();
            double operand1 = stack.top(); stack.pop();
            stack.push(operand1 * operand2);
        }
		i++;
	}
	std::cout << stack.top() << std::endl;
}