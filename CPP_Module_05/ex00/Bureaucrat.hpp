/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:46:09 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/05 12:55:26 by eemuston         ###   ########.fr       */
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
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &src);
		~Bureaucrat();
		
		std::string const getName(void);
		int getGrade(void);
		void incrementGrade(void);
		void decrementGrade(void);
		
		class GradeTooHighException : public std::exception
		{
			
		};
		class GradeTooLowException : public std::exception
		{

		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif