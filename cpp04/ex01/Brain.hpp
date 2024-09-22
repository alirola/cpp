/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:55:34 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 16:57:09 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(std::string ideas);
		Brain (const Brain& copy);
		Brain& operator=(const Brain& other);
		~Brain(void);
};