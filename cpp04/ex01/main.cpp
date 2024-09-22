/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:22:41 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 17:32:44 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
   Animal* meta [4];
      
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            meta [i] = new Dog();
        else
             meta [i] = new Cat();
        std::cout << " ~ Type: " << meta[i]->getType() << "\n";
        std::cout << " ~ Sound: ";
        meta[i]->makeSound();
        delete (meta[i]);
        std::cout << "\n";
    }
    return (0);
}