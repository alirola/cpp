/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:36:56 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/12 13:56:28 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arma) : _arma(arma)
{
	this->name = name;
}

HumanA::~HumanA(void)
{
	std::cout << this->name << " has died\n";
}

void HumanA::attack(void)
{
	std::cout << this->name << ":" << " attacks with their " << this->_arma.getType() << "\n";
}