/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:53:48 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/12 13:25:16 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int i = 0;

	horde = zombieHorde(5, "RALPH");
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	delete []horde;
}