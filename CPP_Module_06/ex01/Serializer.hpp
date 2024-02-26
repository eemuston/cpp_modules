/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:54:25 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/26 16:32:51 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data
{
	std::string name;
	std::string school;
	double lvl;
	int completedProjects;
	std::string lastProject;
};

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer const &src);
		~Serializer();
		Serializer &operator=(Serializer const &src);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif