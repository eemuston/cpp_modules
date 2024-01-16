/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:46:09 by eemuston          #+#    #+#             */
/*   Updated: 2024/01/16 12:14:48 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;
	public:
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();
		
		std::string const getName(void);
		int getGrade(void);
		
		class GradeTooHighException : public std::exception
		{
			
		};
		class GradeTooLowException : public std::exception
		{

		};
};

#endif