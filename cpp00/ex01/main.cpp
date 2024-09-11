/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:26:39 by alirola-          #+#    #+#             */
/*   Updated: 2024/08/27 14:19:17 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
	std::string input;
	Phonebook	agenda;
	while (input != "EXIT")
	{
		std::cout << "Select a command: ADD, SEARCH, EXIT\n";
		std::cout << ">";
		if (!std::getline(std::cin, input, '\n'))
			return(1);
		if (input == "ADD" || input == "add")
			agenda.new_contact();
		if (input == "SEARCH" || input == "search")
			agenda.search_contact();
	}
	return(0);
}