/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:05 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 21:47:33 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <sstream>

void    print_red(std::string const str)
{
	std::cout << "\033[1;31m"<< str << "\033[0m" << std::endl;
}

void    print_yellow(std::string const str)
{
	std::cout << std::endl << "\033[1;33m"<< str << "\033[0m" << std::endl;
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
        print_red("const AAnimal* anim = new AAnimal();");
    std::cout << std::endl;
        print_red(" => Cannot be used directly new AAnimal(); or AAnimal anim;");
        print_red(" => Compilation Error : object of abstract class type [AAnimal] is not allowed.");
        // const AAnimal* anim = new AAnimal();
        // const AAnimal anim;
    }
    std::cout << std::endl;
    std::cout << "--------------------------------" <<std::endl;
    std::cout << std::endl;
    {
        print_blue("const AAnimal *cat = new Cat();");
        const AAnimal *cat = new Cat();
        print_blue("Creation - ok. now destroy");
        delete cat;
    }
    std::cout << std::endl;
    std::cout << "--------------------------------" <<std::endl;
    std::cout << std::endl;
    {
        print_yellow("const AAnimal *dog = new Dog();");
        const AAnimal *dog = new Dog();
        print_yellow("Creation - ok. now destroy");
        delete dog;
    }
    std::cout << std::endl;
    std::cout << "--------------------------------" <<std::endl;
    std::cout << std::endl;

    return 0;
}
/*
//MAIN OF EX01
int main()
{
    std::cout << std::endl;
    print_yellow("-- Initiation of Class Dog -> Brain is created --");
    std::cout << std::endl;
    
    {
        print_yellow("const Animal* j = new Dog();");
        const AAnimal* j = new Dog();

        print_yellow("TYPE IS :");
        std::cout << j->getType() << " " << std::endl;
        
        print_yellow("j(dog)->makeSound(); SOUND IS :");
        j->makeSound();
        delete (j);
    }

    std::cout << std::endl;
    print_red("-- Initiation of Class Cat -> Brain is created --");
    std::cout << std::endl;

    {
        print_red("const Animal* i = new Cat()");
        const AAnimal* i = new Cat();

        print_red("TYPE IS :");
        std::cout << i->getType() << " " << std::endl;
        
        print_red("i(cat)->makeSound(); SOUND IS :");
        i->makeSound();
        delete (i);
    }
    std::cout << std::endl;
    print_green("------- MAIN FROM SUBJECT ----------");
    std::cout << std::endl;

    {
        print_yellow("Creation of a dog");
        const AAnimal* j = new Dog();
        print_blue("Creation of a cat");
        const AAnimal* i = new Cat();
        std::cout << "//should not create a leak" << std::endl;
        print_yellow("Destruction of a dog");
        delete j;
        print_blue("Destruction of a cat");
        delete i;
    }

    {
        print_green("---------Creation of Animals in Array -------------");
        int     num;

        num = 5;
        AAnimal  *animals[num];
        std::cout << "INPUT NUM : [ " << num << " ]" << std::endl;
        print_green("Creating.....Dogs");
        for (int i = 0; i < num / 2; i++)
        {
            animals[i] = new Dog();
            std::cout << "[ " << i << " ] animal created as DOG." << std::endl;
        }
        print_green("Creating.....Cats");
        for (int i = (int)num / 2; i < num; i++)
        {
            animals[i] = new Cat();
            std::cout << "[ " << i << " ] animal created as CAT." << std::endl;
        }
        print_green("Freeing memory");
        for (int i = 0; i < num; i++)
        {
            delete animals[i];
            std::cout << "[ " << i << " ] animal freed." << std::endl;
        }
    }

    std::cout << std::endl;
    print_green("----------- Test Copy of Cat ------------");
    std::cout << std::endl;
    {
        print_blue("Creat Cat");
        Cat cat;
        print_yellow("Creat Copy Cat");
        Cat copycat;
        std::string s;
        std::stringstream sstm;
    
        int ideaNumCat;
        int ideaNumCopyCat;
        ideaNumCat = 5;
        ideaNumCopyCat = 3;

        sstm << "Put [ " << ideaNumCat << " ]ideas in Cat";
        print_blue(sstm.str());
        for (int i = 0; i < ideaNumCat; i++)
        {
            std::stringstream sstm;
            sstm << "   Cat ID [ " << i + 1 << " ]";
            s = sstm.str();
            cat.setIdeas(s);
        }
        cat.printIdeas();
        sstm.str("");
        sstm << "Put [ " << ideaNumCopyCat << " ]ideas in Copy Cat";
        print_yellow(sstm.str());
        for (int i = 0; i < ideaNumCopyCat; i++)
        {
            std::stringstream sstm;
            sstm << "   CopyCat ID [ " << i + 1 << " ]";
            s = sstm.str();
            copycat.setIdeas(s);
        }
        copycat.printIdeas();

        print_blue("Put more than 100 ideas in CopyCat");
        for (int i= 0; i < 100; i++)
        {
            std::stringstream sstm;
            sstm << "   Full [ " << i << " ]";
            copycat.setIdeas(sstm.str());
        }
        // copycat.printIdeas();

        print_green("---Copying Brain from cat to Copycat (Full of ideas)");
        copycat = cat;

        print_green("After Copy: Idea of copy cat (Before Copy, it was full)");
        copycat.printIdeas();

        print_green("---Check if it is copyDeep or copyShallow");
        print_blue("Adding [NEW IDEA!!] to cat");
        cat.setIdeas("   NEW IDEA!!");
        cat.printIdeas();

        
        print_yellow("check copycat idea // New idea shouldn't be added :) ");
        copycat.printIdeas();

        print_green("Deallocate");
    }
    std::cout << std::endl;
    print_green("----------- Test Copy of Dog ------------");
    std::cout << std::endl;
    {
        print_blue("Creat Dog");
        Dog dog;
        print_yellow("Creat Copy Dog");
        Dog copydog;
        std::string s;
        std::stringstream sstm;
    
        int ideaNumDog;
        int ideaNumcopydog;
        ideaNumDog = 5;
        ideaNumcopydog = 3;

        sstm << "Put [ " << ideaNumDog << " ]ideas in Dog";
        print_blue(sstm.str());
        for (int i = 0; i < ideaNumDog; i++)
        {
            std::stringstream sstm;
            sstm << "   Dog ID [ " << i + 1 << " ]";
            s = sstm.str();
            dog.setIdeas(s);
        }
        dog.printIdeas();
        sstm.str("");
        sstm << "Put [ " << ideaNumcopydog << " ]ideas in Copy Dog";
        print_yellow(sstm.str());
        for (int i = 0; i < ideaNumcopydog; i++)
        {
            std::stringstream sstm;
            sstm << "   copydog ID [ " << i + 1 << " ]";
            s = sstm.str();
            copydog.setIdeas(s);
        }
        copydog.printIdeas();

        print_blue("Put more than 100 ideas in copydog");
        for (int i= 0; i < 100; i++)
        {
            std::stringstream sstm;
            sstm << "   Full [ " << i << " ]";
            copydog.setIdeas(sstm.str());
        }
        // copydog.printIdeas();

        print_green("---Copying Brain from Dog to copydog (Full of ideas)");
        copydog = dog;

        print_green("After Copy: Idea of copy Dog (Before Copy, it was full)");
        copydog.printIdeas();

        print_green("---Check if it is copyDeep or copyShallow");
        print_blue("Adding [NEW IDEA!!] to Dog");
        dog.setIdeas("   NEW IDEA!!");
        dog.printIdeas();

        
        print_yellow("check copydog idea // New idea shouldn't be added :) ");
        copydog.printIdeas();

        print_green("-------------------------------------");
        print_green("Deallocate");
    }
    std::cout << std::endl;
    print_green("----------- Evaluation Test ------------");
    std::cout << std::endl;
    {
        Dog basic;
        {        
            Dog tmp = basic;
        }
    }
}
*/
