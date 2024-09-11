/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:20:02 by alirola-          #+#    #+#             */
/*   Updated: 2024/08/27 14:06:27 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void)
{
}

contact::~contact(void)
{
}

contact::contact(std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret)
{
	this->first_name = firstname;
	this->last_name = lastname;
	this->nickname = nickname;
	this->phone_number = phonenumber;
	this->darkest_secret = darkestsecret;
}

void contact::printstr(int flag)
{
	int i;
	int len;
	std::string str;
	
	if (flag == 1)
		str = this->first_name;
	if (flag == 2)
		str = this->last_name;
	if (flag == 3)
		str = this->nickname;
	i = 0;
	len = str.length();
	if (len > 10)
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	else
	{
		while (i < 10 - len)
		{
			std::cout << " ";
			i++;
		}
		i = 0;
		while(i <= len)
		{
			std::cout << str[i];
			i++;
		}
	}
	std::cout << "|";
}

void contact::show_contact()
{
	std::cout << "\nName          -" << this->first_name;
	std::cout << "\nLast name     -" << this->last_name;
	std::cout << "\nNickname      -" << this->nickname;
	std::cout << "\nPhone number  -" << this->phone_number;
	std::cout << "\nDarkest secret-" << this->darkest_secret;
	std::cout << "\n\n";
}
