/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:02:51 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/13 12:23:04 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		AForm *createShrubbery(std::string target);
		AForm *createRobotomy(std::string target);
		AForm *createPresidential(std::string target);
	public:
		Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);
		~Intern();

		AForm *makeForm(std::string form, std::string target);
		
	class NoFormException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#endif