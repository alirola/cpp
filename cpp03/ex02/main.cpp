/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:22:05 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/19 21:23:57 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap trap ("MORTADELO");
	ScavTrap trop ("FILEMON");
	FragTrap trep ("RALPH");

	trap.attack("ANORAK");
	trop.attack("ANORAK");
	trep.attack("ANORAK");
	trap.takeDamage(8);
	trop.takeDamage(8);
	trep.takeDamage(8);
	trap.beRepaired(2);
	trop.beRepaired(2);
	trep.beRepaired(2);
	trop.guardGate();
	trep.highFivesGuys();
	for (int i = 0; i < 10; i++)
	{
		trap.attack("ANORAK");
		trop.attack("ANORAK");
		trep.attack("ANORAK");
	}
	trap.takeDamage(6);
	trop.takeDamage(6);
	trep.takeDamage(6);
	trap.takeDamage(6);
	trop.takeDamage(6);
	trep.takeDamage(6);
	trap.beRepaired(3);
	trop.beRepaired(3);
	trep.beRepaired(3);
}