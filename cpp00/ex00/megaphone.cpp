/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:27:29 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/11 13:39:39 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; argv[i] != NULL; i++)
		{
			for(int j = 0; argv[i][j] != '\0'; j++)
				std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << "\n";
	}
}
