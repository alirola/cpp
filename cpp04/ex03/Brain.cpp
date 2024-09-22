/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:57:25 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 17:02:33 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor called Brain\n";
}

Brain::Brain (std::string ideas)
{
	std::cout << "Attributes constructor called Brain";
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas;
}

Brain::Brain (const Brain& copy)
{
	*this = copy;
	std::cout << "Copy constructor called Brain\n";
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	std::cout << "Copy assignment operator called Brain\n";
	return(*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor called Brain\n";
}