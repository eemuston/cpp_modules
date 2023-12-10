/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:30:13 by eemuston          #+#    #+#             */
/*   Updated: 2023/12/09 15:04:17 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const &src);
		Brain &operator=(Brain const &rhs);
		std::string	getIdeas(int i) const;
		void		setIdeas(int i, std::string idea);
		void		printIdeas(void);
	private:
		std::string		ideas[100];
};

#endif