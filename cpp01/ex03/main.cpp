/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:45:33 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/08 18:50:06 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("zapatofono");
		HumanA mortadelo("mortadelo", club);
		mortadelo.attack();
		club.setType("some other type of club");
		mortadelo.attack();
	}
	{
		Weapon club = Weapon("zapatofono");
		HumanB filemon("filemon");
		filemon.setWeapon(club);
		filemon.attack();
		club.setType("some other type of club");
		filemon.attack();
	}
	return 0;
}