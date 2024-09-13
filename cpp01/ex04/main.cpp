/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:55:15 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/08 19:15:03 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string file = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		if (s1.empty())
		{
			std::cout << "Error: the string s1 is empty\n";
			return(1);
		}
		if (Replace::replace(file, s1, s2) == 1)
			return (1);
	}
	else
	{
		std::cout << "Error: incorrect number of args\n";
		return(1);
	}
	return(0);
}