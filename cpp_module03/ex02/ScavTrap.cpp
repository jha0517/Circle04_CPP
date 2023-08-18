/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:14:05 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 13:34:41 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ClapTrap    *get_class(std::list<ClapTrap *> g, std::string target);
void        print_red(std::string const str);

ScavTrap::ScavTrap(){
    this->hit = 100;
    this->energy = 50;
    this->attackDamage = 20;
    std::cout << this->name <<" ScavTrap Constructor " << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    std::cout << "["<< this->name << "] initialising to [" << name <<"] ScavTrap Constructor " << std::endl;
    this->name = name;
    this->hit = 100;
    this->energy = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << this->name << " ScavTrap Destructor " << std::endl;
}

void ScavTrap::attack(const std::string & target){
    std::cout << std::endl << "---------------ScavTrap--Attack-----------------" << std::endl;
    if (!get_class(ClapTrap::totalNames, target))
    {
        std::cout << "target : " << target << " does not exist." << std::endl;
        std::cout << "------------------------------------------------" << std::endl;  return ;
    }
    if (this->energy <= 0)
    {
        print_red(this->name + " can't attack. There is no energy available");
        std::cout << std::endl;
        std::cout << "------------------------------------------------" << std::endl;
        return ;
    }
    if (get_class(ClapTrap::totalNames, target)->getHit() <= 0)
    {
        std::cout << this->name << " attack failed. Remaining energy : " << this->energy << std::endl;
    }
    else
    {
        this->energy--;
        std::cout << this->name << " attacks "\
        << target << ", causing "\
        << this->attackDamage << " points of damage! Remaining energy : " << this->energy << std::endl;
    }
    get_class(ClapTrap::totalNames, target)->takeDamage(attackDamage);

}

ScavTrap & ScavTrap::operator=(ScavTrap & a){
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

std::ostream & operator<<(std::ostream & o, ScavTrap & rhs)
{
    std::cout << std::endl << "--------Print Infos-------" << std::endl;
    o << "Name is " << rhs.getName() << std::endl;
    o << "Hit point is " << rhs.getHit() << std::endl;
    o << "Energy is " << rhs.getEnergy() << std::endl;
    o << "Attack Damage is " << rhs.getAttackDamage() << std::endl;
    o << "----------------------------" << std::endl;
    return (o);
}

void ScavTrap::guardGate(){
    if (this->hit <= 0){
        print_red(this->name + " can't enter gate keeping Mode cuz dead!."); return ;
    }
    std::cout << std::endl << "--------["<< this->name <<"] Gate keeping Mode-------" << std::endl;
}
