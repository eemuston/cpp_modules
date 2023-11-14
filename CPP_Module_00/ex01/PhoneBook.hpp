/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:12:14 by eemuston          #+#    #+#             */
/*   Updated: 2023/11/14 16:05:02 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include <cctype>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void		addContacts(void);
		void		printContacts(void);
		void		printContactsWithIndex(void);
		std::string	rightLength(std::string str);
	private:
		Contact contact[8];
};

#endif