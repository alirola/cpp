/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:08:11 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/19 21:10:17 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
	public:
			FragTrap (void);
			FragTrap(std::string name);
			FragTrap(const FragTrap& other);
			FragTrap & operator=(const FragTrap& other);
			~FragTrap(void);
			void highFivesGuys(void);
};