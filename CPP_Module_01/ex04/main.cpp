/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 02:55:20 by eemuston          #+#    #+#             */
/*   Updated: 2023/10/26 04:24:43 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **av, std::string tmp)
{
	std::ofstream	outFile;
	std::string		endFile = av[1];
	std::string		replaceable = av[2];
	std::string		replacer = av[3];
	int				i = 0;
	int				pos;

	outFile.open((endFile + ".replace").c_str());
	if (outFile.fail())
	{
		std::cerr << "Error: Failed to open " << endFile + ".replace!" << std::endl;
		return (1);
	}
	while (i < (int)tmp.size())
	{
		pos = tmp.find(replaceable, i);
		if (pos != -1 && pos == i)
		{
			outFile << replacer;
			i += std::string(replaceable).size() - 1;
		}
		else
			outFile << tmp[i];
		i++;
	}
	outFile.close();
	return (0);
}

int	main(int ac, char **av)
{
	char			c;
	std::ifstream	inFile;
	std::string		startFile = av[1];
	std::string		tmp;

	if (ac != 4)
	{
		std::cout << "Error: invalid amount of arguments!" << std::endl;
		std::cout << "Usage: ./replace [filename] [replaceable] [replacer]!" << std::endl;
		return (1);
	}
	inFile.open(startFile);
	if (inFile.fail())
	{
		std::cerr << "Error: failed to open " << startFile << "!" << std::endl;
		return (1);
	}
	while(!inFile.eof() && inFile >> std::noskipws >> c)
		tmp += c;
	inFile.close();
	return (replace(av, tmp));
}