/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:08:41 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 17:09:32 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog (void):Animal("Dog")
{
	std::cout << "Default constructor called Dog\n";
	_brain = new Brain();
}

Dog::Dog (const Dog& copy)
:Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called Dog\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		if (_brain)
			delete (_brain);
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	std::cout << "Copy assignment operator called Dog\n";
	return(*this);
}

Dog::~Dog(void)
{
	delete (_brain);
	std::cout << "Destructor called Dog\n";
}

void Dog::makeSound() const
{
	std::cout << "Wooooff wooooff (Dog sound)\n";
}