/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:54:33 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 13:43:29 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void        print_red(std::string const str);

FragTrap::FragTrap()
{
    this->hit = 100;
    this->energy = 100;
    this->attackDamage = 30;
    std::cout << this->name <<" FragTrap Constructor " << std::endl;
}

FragTrap::FragTrap(std::string name){
    std::cout << "["<< this->name << "] initialising to [" << name <<"] ScavTrap Constructor " << std::endl;
    this->name = name;
    this->hit = 100;
    this->energy = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << this->name <<" FragTrap  Destructor"<< std::endl;
}

void FragTrap::highFivesGuys(void){
    if (this->hit <= 0){
        print_red(this->name + " can't ask for positive high fives cuz dead!."); return ;
    }
    std::cout << this->name << " asking for positive high fives!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap &a){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
    {
        this->name = a.name;
        this->attackDamage = a.attackDamage;
        this->hit = a.hit;
        this->energy = a.energy;
    }
	return (*this);
}
