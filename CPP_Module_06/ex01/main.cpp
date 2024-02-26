/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:58:13 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/26 16:37:25 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data Eemeli;
	
	Eemeli.name = "Eemeli";
	Eemeli.school = "Hive Helsinki";
	Eemeli.lvl = 5.22;
	Eemeli.completedProjects = 20;
	Eemeli.lastProject = "CPP Module 05";

	std::cout << "Data Data address: " << &Eemeli << std::endl;
	std::cout << "Data Name: " << Eemeli.name << std::endl;
	std::cout << "Data School: " << Eemeli.school << std::endl;
	std::cout << "Data Level: " << Eemeli.lvl << std::endl;
	std::cout << "Data Completed projects: " << Eemeli.completedProjects << std::endl;
	std::cout << "Data lastProject: " << Eemeli.lastProject << std::endl;

	uintptr_t serialized = Serializer::serialize(&Eemeli);
	
	std::cout << std::endl;
	
	std::cout << "Serialized Data address: " << serialized << std::endl;

	std::cout << std::endl;
	
	Data *ptr = Serializer::deserialize(serialized);
	
	std::cout << "Deserialized Data Data address: " << &ptr << std::endl;
	std::cout << "Deserialized Data Name: " << ptr->name << std::endl;
	std::cout << "Deserialized Data School: " << ptr->school << std::endl;
	std::cout << "Deserialized Data Level: " << ptr->lvl << std::endl;
	std::cout << "Deserialized Data Completed projects: " << ptr->completedProjects << std::endl;
	std::cout << "Deserialized Data lastProject: " << ptr->lastProject << std::endl;
}