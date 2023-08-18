/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:54:02 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/15 09:37:41 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>
# include <list>
# include <iterator>
# include <sstream>
//CANONIC TO DO
class ClapTrap
{
protected:
    std::string name;
    int         hit;
    int         energy;
    int         attackDamage;
    static  std::list<ClapTrap *> totalNames;
    static  int defaultNum;

public:
    ClapTrap(); 
    ClapTrap(std::string name);
    ~ClapTrap(void);
    ClapTrap & operator=(ClapTrap &a);

    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    std::string getName() const;
    int getHit() const;
    int getEnergy() const;
    int getAttackDamage() const;
    void setAttackDamage(int amount);
    void setName(std::string name);
    void setEnergy(int amount);
};

std::ostream & operator<<(std::ostream &output, ClapTrap & rhs);
#endif
