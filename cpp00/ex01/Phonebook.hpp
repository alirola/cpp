/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:28:54 by alirola-          #+#    #+#             */
/*   Updated: 2024/07/31 20:32:57 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "contact.hpp"

class Phonebook
{
	private:
		contact	contacts[8];
		int	index;
	public:
			Phonebook();
			~Phonebook();
		void new_contact();
		void search_contact();
};