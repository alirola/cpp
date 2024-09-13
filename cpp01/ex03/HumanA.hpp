/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:30:59 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/02 20:56:36 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &_arma;
		HumanA(void);
	public:
		HumanA(std::string name, Weapon &arma);
		~HumanA(void);
		void attack(void);
};