/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:15:47 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:28:30 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat (void):Animal("Cat")
{
	std::cout << "Default constructor called Cat\n";
}

Cat::Cat (const Cat& copy)
: Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called Cat\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Copy assignment operator called Cat\n";
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Destructor called Cat\n";
}

void Cat::makeSound() const
{
	std::cout << "Meeewwwww (Cat sound)\n";
}