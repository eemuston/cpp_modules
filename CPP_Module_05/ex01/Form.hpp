/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:55:58 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/09 20:07:42 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_executionGrade;
	public:
		Form(std::string name, int signGrade, int executionGrade);
		Form(Form const &src);
		Form &operator=(Form const &src);
		~Form();

		std::string const getName(void);
		bool getIsSigned(void);
		int getSignGrade(void);
		int getExecutionGrade(void);
		
		void beSigned(Bureaucrat &Bureaucrat);
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, Form &src);

#endif