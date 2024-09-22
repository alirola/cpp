/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:36:48 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:43:15 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor called WrongAnimal\n";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Attributes constructor called WrongAnimal\n";
	_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
	std::cout << "Copy constructor called WrongAnimal\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Copy assignment operator called WrongAnimal\n";
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called WrongAnimal\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "Euuuuwwww (Default animal sound)\n";
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}