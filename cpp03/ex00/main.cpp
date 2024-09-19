/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:08:14 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/18 21:10:08 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap trap ("RALPH");
	
	trap.attack("ANORAK");
	trap.takeDamage(8);
	trap.beRepaired(2);
	for (int i = 0; i < 10; i++)
		trap.attack("ANORAK");
	trap.takeDamage(6);
	trap.takeDamage(6);
	trap.takeDamage(3);
}