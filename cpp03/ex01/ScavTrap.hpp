/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:24:54 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/19 21:01:02 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	private:
	
	public:
			ScavTrap (void);
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& copy);
			ScavTrap& operator=(const ScavTrap& other);
			~ScavTrap(void);
			void attack(const std::string& target);
			void guardGate(void);
};