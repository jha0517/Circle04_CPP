/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:54:35 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 13:33:18 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void    print_green(std::string const str)
{
	std::cout << std::endl << "\033[1;32m"<< str << "\033[0m" << std::endl;

}

int main(void)
{
    {
        print_green("--------ORDER OF DEFAULT CONTRUCTOR/DESTRUCTOR & INIT VALUE-------");
        std::cout << std::endl;
        FragTrap    test;
        std::cout << test << std::endl;
    }

    {
        print_green("--------ORDER OF ARGUMENTS CONTRUCTOR/DESTRUCTOR & INIT VALUE-------");
        std::cout << std::endl;
        FragTrap    test("chou");
        std::cout << test << std::endl;
    }
    print_green("------------------TEST START-----------------------");
    std::cout << std::endl;

    FragTrap    hulk("Hulk");
    FragTrap    randomGuy;
    FragTrap    randomGuy2;

    print_green("1. Show info of Hulk");
    std::cout << hulk << std::endl;

    print_green("   Show info of randomGuy, randomGuy2. see the name are generic.");
    std::cout << randomGuy;
    std::cout << randomGuy2 << std::endl;
    randomGuy.setName("Tobby");
    std::cout << randomGuy;

    print_green("2. Attacking somebody who is not there");
    hulk.attack("somebody");

    print_green("3. setting attack damage to 5 and attacks again.");
    hulk.setAttackDamage(5);
    hulk.attack("Tobby");

    print_green("4. setting attack damage to 70");
    hulk.setAttackDamage(70);
    std::cout << std::endl;

    print_green("5. Continue the attack til target is dead");
    hulk.attack("Tobby");
    hulk.attack("Tobby");

    print_green("6. if we attack after the target is dead?");
    hulk.attack("Tobby");

    print_green("7. Dead body cannot be repaired");
    randomGuy.beRepaired(10);
    
    print_green("8. No energy no attack nor repair possible.");
    hulk.setEnergy(0);
    hulk.beRepaired(5);
    hulk.attack("Default3");

    print_green("9. use repair on living guy.");
    randomGuy2.beRepaired(5);

    print_green("10. Request highFives.");
    randomGuy2.highFivesGuys();

    print_green("11. Dead person Request highFives.");
    randomGuy.highFivesGuys();
}