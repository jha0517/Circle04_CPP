/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:53:59 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 11:51:00 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::list<ClapTrap *> ClapTrap::totalNames;
int ClapTrap::defaultNum = 0;

void    print_red(std::string const str)
{
	std::cout << "\033[1;31m"<< str << "\033[0m" << std::endl;
}

void    print_yellow(std::string const str)
{
	std::cout << "\033[1;33m"<< str << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap() : hit(10), energy(10), attackDamage(0)
{
    std::stringstream sstm;

    defaultNum++;
    sstm << "Default" << defaultNum;
    this->name = sstm.str();
    std::cout << "Default"<< ClapTrap::defaultNum <<" ClapTrap Constructor" << std::endl;
    ClapTrap::totalNames.insert(ClapTrap::totalNames.begin(), this);
}

ClapTrap::ClapTrap(std::string n) : name(n), hit(10), energy(10), attackDamage(0)
{
    std::cout << this->name << " ClapTrap Constructor" << std::endl;
    ClapTrap::totalNames.insert(ClapTrap::totalNames.begin(), this);
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " ClapTrap Destructor" << std::endl;
    defaultNum--;
}

std::string ClapTrap::getName() const {return (this->name);}

int ClapTrap::getHit() const {return (this->hit);}

int ClapTrap::getEnergy() const {return (this->energy);}

int ClapTrap::getAttackDamage() const{return (this->attackDamage);}

ClapTrap *get_class(std::list<ClapTrap *> g, std::string target)
{
    std::list<ClapTrap *>::iterator it;
    ClapTrap *name = NULL;
    
    for (it = g.begin(); it != g.end(); ++it)
    {
        name = *it;
        if (target.compare(name->getName()) == 0)
            return (name);
    }
    return (NULL);
}

void ClapTrap::setName(std::string newName){
    ClapTrap::totalNames.remove(get_class(ClapTrap::totalNames, this->name));
    print_yellow("Setting Name : " + this->name + " --> " + newName);
    this->name = newName;
    ClapTrap::totalNames.insert(ClapTrap::totalNames.begin(), this);
}


void ClapTrap::attack(const std::string & target){
    std::cout << std::endl << "----------------------Attack--------------------" << std::endl;
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
    if (get_class(ClapTrap::totalNames, target)->hit <= 0)
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

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hit <= 0)
    {

        print_red(this->name + " is already dead.... Can't attack a dead man.");
        std::cout << std::endl << "-------------------------------------------" << std::endl; return ;
        return ;
    }
    this->hit -= amount;
    if (this->hit <= 0)
        std::cout << this->name << " loosing " << amount << " point(s), HP remains : " << this->hit << " => DEAD!"<< std::endl; 
    else
        std::cout << this->name << " loosing " << amount << " point(s), HP remains : " << this->hit << std::endl; 
    std::cout << "------------------------------------------------" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    
    std::cout << std::endl << "------------Repair-------------------------" << std::endl;
    if (this->energy <= 0)
    {
        print_red(this->name + " can't repair. There is no energy available.");
        std::cout << std::endl << "-------------------------------------------" << std::endl; return ;
        return ;
    }
    if (this->hit <= 0)
    {
        print_red(this->name + " can't repair your self after you are dead.");
        std::cout << std::endl << "-------------------------------------------" << std::endl; return ;
    }
    this->hit += amount;
    this->energy--;
    std::cout << this->name << ", 1pt energy used to repair " << amount << " point(s)." << std::endl;
    std::cout << this->name << ", New HP is " << this->hit << ". Remaining energy : " << this->energy << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap & a){
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

std::ostream & operator<<(std::ostream & o, ClapTrap & rhs)
{ 
    std::cout << std::endl << "--------Print Infos-------" << std::endl;
    o << "Name is " << rhs.getName() << std::endl;
    o << "Hit point is " << rhs.getHit() << std::endl;
    o << "Energy is " << rhs.getEnergy() << std::endl;
    o << "Attack Damage is " << rhs.getAttackDamage() << std::endl;
    o << "----------------------------" << std::endl;
    return (o);
}

void ClapTrap::setAttackDamage(int amount){
    std::stringstream sstm;

    if (amount < 0){std::cout << "AttackDamage needs to be positive  number" << std::endl; return ;}
    sstm << this->name << " : " << this->attackDamage << " --> " << amount;
    print_yellow("Setting attackDamage for " + sstm.str());
    this->attackDamage = amount;
}

void ClapTrap::setEnergy(int amount){
    std::stringstream sstm;

    if (amount < 0){std::cout << "Energy needs to be positive  number" << std::endl; return ;}
    sstm << this->name << " : " << this->attackDamage << " --> " << amount;
    print_yellow("Setting Energy for " + sstm.str());
    this->energy = amount;
}
