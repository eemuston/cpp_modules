/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:01:36 by eemuston          #+#    #+#             */
/*   Updated: 2023/09/04 16:52:16 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	contact_amount = 1;
}

Contact::~Contact(void)
{
	
}
void Contact::setFirstName(std::string str)
{
	this->firstName = str;
}

void Contact::setLastName(std::string str)
{
	this->lastName = str;
}

void Contact::setNickName(std::string str)
{
	this->nickName = str;
}

void Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
}

void	Contact::initContact(void)
{
	std::string input;
	
	std::cout << "Firstname :" <<std::endl;
	std::cin >> input;
	setFirstName(input);
	std::cin.clear();
	std::cout << "Lastname :" <<std::endl;
	std::cin >> input;
	setLastName(input);
	std::cin.clear();
	std::cout << "Nickname :" <<std::endl;
	std::cin >> input;
	setNickName(input);
	std::cin.clear();
	std::cout << "Phonenumber :" <<std::endl;
	std::cin >> input;
	setPhoneNumber(input);
	std::cin.clear();
	std::cout << "Darkestsecret :" <<std::endl;
	std::cin >> input;
	setDarkestSecret(input);
	std::cin.clear();
}

void	Contact::setIndex(int i)
{
	this->index = i;
}
std::string	Contact::getFirstName(void)
{
	return(this->firstName);
}

std::string	Contact::getLastName(void)
{
	return(this->lastName);
}

std::string	Contact::getNickName(void)
{
	return(this->nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return(this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return(this->darkestSecret);
}

int	Contact::getIndex(void)
{
	return(this->index);
}
