/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:55:58 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 19:51:09 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_executionGrade;
	public:
		AForm(std::string name, int signGrade, int executionGrade);
		AForm(AForm const &src);
		AForm &operator=(AForm const &src);
		virtual ~AForm();

		std::string const getName(void) const;
		bool getIsSigned(void) const;
		int getSignGrade(void) const;
		int getExecutionGrade(void) const;
		
		void beSigned(Bureaucrat &Bureaucrat);
		virtual std::string getTarget(void) const = 0;
		virtual void execute(Bureaucrat const & executor) const = 0;
	
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
	class GradeTooLowExecutorException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	
};

std::ostream &operator<<(std::ostream &o, AForm &src);

#endif