/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:54:35 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 15:11:35 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    print_green(std::string const str)
{
	std::cout << std::endl << "\033[1;32m"<< str << "\033[0m";

}

int main(void)
{
    ClapTrap    hulk("Hulk");
    ClapTrap    randomGuy;
    ClapTrap    randomGuy2;

    print_green("1. Show info of Hulk");
    std::cout << hulk << std::endl;

    print_green("   Show info of randomGuy, randomGuy2. see the name are generic.");
    std::cout << randomGuy;
    std::cout << randomGuy2 << std::endl;
    randomGuy.setName("Tobby");
    std::cout << randomGuy;

    print_green("2. Attacking somebody who is not there");
    hulk.attack("somebody");

    print_green("3. Attacking existing guy. but pitty the damage of attack is 0");
    hulk.attack("Tobby");
    
    print_green("4. setting attack damage to 5 and attacks again.");
    hulk.setAttackDamage(5);
    hulk.attack("Tobby");

    print_green("5. Continue the attack til target is dead");
    hulk.attack("Tobby");

    print_green("6. if we attack after the target is dead?");
    hulk.attack("Tobby");
    hulk.attack("Tobby");

    print_green("7. Dead body cannot be repaired");
    randomGuy.beRepaired(10);
    
    print_green("8. IF No energy, no attack nor repair possible.");
    hulk.setAttackDamage(1);
    hulk.attack("Default2");
    hulk.attack("Default2");
    hulk.attack("Default2");
    hulk.attack("Default2");
    hulk.attack("Default2");
    hulk.attack("Default2");
    hulk.attack("Default2");
    hulk.attack("Default2");
    hulk.beRepaired(5);

    print_green("9. use repair on living guy.");
    randomGuy2.beRepaired(5);
}