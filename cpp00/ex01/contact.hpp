/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:08:06 by alirola-          #+#    #+#             */
/*   Updated: 2024/08/27 14:14:53 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cstdlib>

class contact
{
	private:
			std::string	first_name;
			std::string last_name;
			std::string nickname;
			std::string phone_number;
			std::string darkest_secret;
	public:
			contact(void);
			contact(std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret);
			~contact(void);
			void	printstr(int flag);
			void	show_contact();
};

//classname(void) = constructor
//classname(cosas) = constructor con parametros para iniciar un objeto
//~classname(void) = destructor