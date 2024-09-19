/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:28:04 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/19 20:24:33 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
	protected:
			std::string _name;
			int _Hit;
			int _Attack;
			int _Energy;
	public:
			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& copy);
			ClapTrap& operator=(const ClapTrap& other);
			~ClapTrap(void);
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};