/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:05 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 17:26:59 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"

void    print_red(std::string const str)
{
	std::cout << "\033[1;31m"<< str << "\033[0m" << std::endl;
}

void    print_yellow(std::string const str)
{
	std::cout << "\033[1;33m"<< str << "\033[0m" << std::endl;
}

void    print_green(std::string const str)
{
	std::cout << std::endl << "\033[1;32m"<< str << "\033[0m" << std::endl;

}

void    print_blue(std::string const str)
{
	std::cout << std::endl << "\033[1;34m"<< str << "\033[0m" << std::endl;

}
int main()
{
    {
        print_green("const Animal* meta = new Animal();");
        const Animal* meta = new Animal();

        print_green("meta(animal)->makeSound(); SOUND IS :");
        meta->makeSound();
        delete (meta);
    }

    std::cout << std::endl;
    std::cout << "--------------------------------" <<std::endl;
    std::cout << std::endl;
    
    {
        print_yellow("const Animal* j = new Dog();");
        const Animal* j = new Dog();

        print_yellow("TYPE IS :");
        std::cout << j->getType() << " " << std::endl;
        
        print_yellow("j(dog)->makeSound(); SOUND IS :");
        j->makeSound();
        delete (j);
    }

    std::cout << std::endl;
    std::cout << "--------------------------------" <<std::endl;
    std::cout << std::endl;

    {
        print_red("const Animal* i = new Cat()");
        const Animal* i = new Cat();

        print_red("TYPE IS :");
        std::cout << i->getType() << " " << std::endl;
        
        print_red("i(cat)->makeSound(); SOUND IS :");
        i->makeSound();
        delete (i);
    }

    std::cout << std::endl;
    std::cout << "--------------------------------" <<std::endl;
    std::cout << std::endl;

    {
        print_blue("const Animal* k = new WrongCat();");
        const WrongAnimal* k = new WrongCat();

        print_blue("TYPE IS :");
        std::cout << k->getType() << " " << std::endl;
        
        print_blue("k(WrongCat)->makeSound(); SOUND IS :");
        k->makeSound();
        delete (k);
    }

    std::cout << std::endl;
    print_red("----------- MAIN IN SUBJECT ------------");
    std::cout << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        print_red("Next sound will output the cat sound");
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete (meta);
        delete (i);
        delete (j);

    }
    std::cout << std::endl;
    std::cout << "--------------------------------" <<std::endl;
    std::cout << std::endl;

    return 0;
}