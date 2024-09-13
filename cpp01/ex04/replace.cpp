/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:01:48 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/08 19:12:24 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int Replace::replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream inputFile(filename.c_str());
	std::string newFile = filename + ".replace";
	std::ofstream outputFile(newFile.c_str());
	std::string	line;
	size_t ptr;

	if (!inputFile.is_open())
	{
		std::cout << "Can't open file\n";
		return(1);
	}
	if (!outputFile.is_open())
	{
		std::cout <<"Can't create output file\n";
		return(1);
	}
	while (getline(inputFile, line))
	{
		ptr = 0;
		while((ptr = line.find(s1, ptr)) != std::string::npos)
		{
			line.erase(ptr, s1.length());
			line.insert(ptr, s2);
			ptr += s2.length();
		}
		outputFile << line << std::endl;
	}
	outputFile.close();
	inputFile.close();
	return(0);
}