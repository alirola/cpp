/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:14:39 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/02 13:24:55 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);