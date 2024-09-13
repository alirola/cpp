/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:01:46 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/02 20:06:17 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string hi = "HI THIS BRAIN";
	std::string *stringPTR = &hi;
	std::string &stringREF = hi;

	std::cout << "Memory 1: " << &hi << "\n";
	std::cout << "Memory 2: " << stringPTR << "\n";
	std::cout << "Memory 3: " << &stringREF << "\n\n";

	std::cout << "Value 1: " << hi << "\n";
	std::cout << "Value 2: " << *stringPTR << "\n";
	std::cout << "Value 3: " << stringREF << "\n";
}