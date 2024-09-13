/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:39:35 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/08 18:38:57 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->_arma = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " has died\n";
}

void HumanB::attack(void)
{
	if (this->_arma != NULL)
		std::cout << this->name << ":" << " attacks with their " << this->_arma->getType() << "\n";
}

void HumanB::setWeapon(Weapon &arma)
{
	this->_arma = &arma;
}