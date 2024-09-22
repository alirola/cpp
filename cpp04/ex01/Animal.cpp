/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:41:54 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:29:21 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor called Animal\n";
}

Animal::Animal(std::string type)
{
	std::cout << "Attributes constructor called Animal\n";
	_type = type;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Copy constructor called Animal\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Copy assignment operator called Animal\n";
	return (*this);
}

Animal::~Animal (void)
{
	std::cout << "Destructor called Animal\n";
}

void Animal::makeSound() const
{
	std::cout << "ññññ (Default animal sound)\n";
}

std::string Animal::getType(void) const
{
	return (_type);
}