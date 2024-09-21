/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:22:41 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:49:03 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    std::cout << " ~ Type: " << meta->getType() << "\n";
    std::cout << " ~ Sound: ";
    meta->makeSound();
    delete (meta);
    std::cout << "\n";

    const Animal* dog = new Dog();
    std::cout << " ~ Type: " << dog->getType() << "\n";
    std::cout << " ~ Sound: ";
    dog->makeSound();
    delete (dog);
    std::cout << "\n";
    
    const Animal* cat = new Cat();
    std::cout << " ~ Type: " << cat->getType() << "\n";
    std::cout << " ~ Sound: ";
    cat->makeSound();
    delete (cat);
    std::cout << "\n";

	const WrongAnimal* wrongMeta = new WrongAnimal();
    std::cout << " ~ Type: " << wrongMeta->getType() << "\n";
    std::cout << " ~ Sound: ";
    wrongMeta->makeSound();
    delete (wrongMeta);
    std::cout << "\n";
    
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << " ~ Type: " << wrongCat->getType() << "\n";
    std::cout << " ~ Sound: ";
    wrongCat->makeSound();
    delete (wrongCat);

	return 0;
}