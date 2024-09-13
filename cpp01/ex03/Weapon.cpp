/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:43:15 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/02 20:45:09 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
	std::cout << this->type << " is broken\n";
}

const std::string &Weapon::getType(void)
{
	return(type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}