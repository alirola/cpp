/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:10:58 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/19 21:24:35 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called FragTrap\n";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Attributes constructor called FragTrap\n";
	_name = name;
	_Hit = 100;
	_Energy = 100;
	_Attack = 30;
}

FragTrap::FragTrap(const FragTrap& copy)
	:ClapTrap(copy)
{
	_name = copy._name;
	_Hit = copy._Hit;
	_Energy = copy._Energy;
	_Attack = copy._Attack;
	std::cout << "Copy constructor called FragTrap\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_Hit = other._Hit;
		_Energy = other._Energy;
		_Attack = other._Attack;
	}
	std::cout << "Copy assignment operator called FragTrap\n";
	return(*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called FragTrap\n";
}

void FragTrap::highFivesGuys(void)
{
	if (_Energy > 0 && _Hit > 0)
	{
		std::cout << "FragTrap " << _name << " is giving you a High Five\n";
		_Energy--;
		std::cout << " ~ Energy points left: " << _Energy << "\n";
	}
	else if (_Hit <= 0)
		std::cout << "FragTrap " << _name << " is already dead!\n";
	else if (_Energy <= 0)
		std::cout << "FragTrap " << _name << " has not enough energy to attack!\n";
}