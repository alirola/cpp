/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:28:07 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/19 21:04:42 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called ScavTrap\n";
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Attributes constructor called ScavTrap\n";
	_name = name;
	_Hit = 100;
	_Energy = 50;
	_Attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
	: ClapTrap(copy)
{
	_name = copy._name;
	_Hit = copy._Hit;
	_Energy = copy._Energy;
	_Attack = copy._Attack;
	std::cout << "Copy constructor called ScavTrap\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if(this != &other)
	{
		_name = other._name;
		_Hit = other._Hit;
		_Energy = other._Energy;
		_Attack = other._Attack;
	}
	return(*this);
	std::cout << "Copy assignment operator called ScavTrap\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called ScavTrap\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (_Energy > 0 && _Hit > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _Attack << " points of damage!\n";
		_Energy--;
		std::cout << " ~ Energy points left: " << _Energy << "\n";
	}
	else if (_Hit <= 0)
		std::cout << "ScavTrap " << _name << " is already dead!\n";
	else if (_Energy <= 0)
		std::cout << "ScavTrap " << _name << " has not enough energy to attack!\n";
}

void ScavTrap::guardGate(void)
{
	if (_Energy > 0 && _Hit > 0)
	{
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
		_Energy--;
		std::cout << " ~ Energy points left: " << _Energy << "\n";
	}
	else if (_Hit <= 0)
		std::cout << "ScavTrap " << _name << " is already dead!\n";
	else if (_Energy <= 0)
		std::cout << "ScavTrap " << _name << " has not enough energy to attack!\n";
}