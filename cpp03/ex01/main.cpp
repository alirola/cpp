/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:44:37 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/19 20:49:21 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap trap ("MORTADELO");
	ScavTrap trep ("FILEMON");

	trap.attack("ANORAK");
	trep.attack("ANORAK");
	trap.takeDamage(8);
	trep.takeDamage(8);
	trap.beRepaired(2);
	trep.beRepaired(2);
	trep.guardGate();
	for (int i = 0;  i < 10; i++)
	{
		trap.attack("ANORAK");
		trep.attack("ANORAK");
	}
	trap.takeDamage(6);
	trep.takeDamage(6);
	trap.takeDamage(6);
	trep.takeDamage(6);
	trap.beRepaired(3);
	trep.beRepaired(3);
}