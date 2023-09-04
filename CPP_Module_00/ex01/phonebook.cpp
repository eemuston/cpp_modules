/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:28:59 by eemuston          #+#    #+#             */
/*   Updated: 2023/09/04 16:55:24 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	
}

PhoneBook::~PhoneBook(void)
{
	
}

void	PhoneBook::addContacts(void)
{
	static int	i;
	this->contact[(i % 8) + 1].initContact();
	this->contact[(i % 8) + 1].setIndex((i % 8) + 1);
	if (this->contact[0].contact_amount != 9)
		this->contact[0].contact_amount++;
	i++;
}

std::string PhoneBook::rightLength(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);	
}	 

void	PhoneBook::printContacts(void)
{
	int i;

	i = 1;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index| Firstname|  Lastname|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < this->contact[0].contact_amount)
	{
		std::cout << "|" << std::setw(10) << this->contact[i].getIndex() << std::flush;
		std::cout << "|" << std::setw(10) << rightLength(this->contact[i].getFirstName()) << std::flush;
		std::cout << "|" << std::setw(10) << rightLength(this->contact[i].getLastName()) << std::flush;
		std::cout << "|" << std::setw(10) << rightLength(this->contact[i].getNickName()) << std::flush;
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		i++;
	}
}

void	PhoneBook::printContactsWithIndex(void)
{
	std::string	index;
	int			num;
	
	std::cout << "Which index do you want to print : ";
	std::cin.clear();
	std::cin >> index;
	std::cin.clear();
	for (int i = 0; i < index.length(); i++)
	{
		if (!std::isdigit(index[i]))
		{
			std::cout << "Not a valid index!" << std::endl;
			return ;
		}
	}
	num = std::atoi(index.c_str());
	if (num > 0 && num < this->contact[0].contact_amount) 
	{
		std::cout << "Firstname : " << this->contact[num].getFirstName() << std::endl;
		std::cout << "Lastname : " << this->contact[num].getLastName() << std::endl;
		std::cout << "Nickname : " << this->contact[num].getNickName() << std::endl;
		std::cout << "Phonenumber : " << this->contact[num].getPhoneNumber() << std::endl;
		std::cout << "Darkestsecret : " << this->contact[num].getDarkestSecret() << std::endl;
		return;
	}
	else
	{
		std::cout << "Not a valid index!" << std::endl;
		std::cin.clear();
	}
	return;
}

int main (void)
{
	std::string	str;
	PhoneBook	book;

	std::cout << "Welcome to the Phonebook!" << std::endl;
	while (str != "EXIT")
	{
		str.clear();
		std::cin.clear();
		std::cout << "Do you wanna ADD, SEARCH or EXIT?: ";
		std::cin >> str;
		if (str == "ADD")
			book.addContacts();
		else if (str == "SEARCH")
		{
			book.printContacts();
			book.printContactsWithIndex();
			std::cin.clear();
			continue ;
		}
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Not valid command!" << std::endl;
		std::cin.clear();
	}
	std::cout << "See you soon!" << std::endl;
	return (0);
}
