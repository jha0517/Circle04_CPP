/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:54:02 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 15:14:31 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>
# include <list>
# include <iterator>
# include <sstream>

class ClapTrap
{
    private:
        std::string name;
        int         hit;
        int         energy;
        int         attackDamage;
        static  int defaultNum;
        static  std::list<ClapTrap *> totalNames;

    public:
        ClapTrap(); 
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap &a);

        void attack(const std::string & target);
        void takeDamage(unsigned int const amount);
        void beRepaired(unsigned int const amount);
        
        std::string getName(void) const;
        int getHit(void) const;
        int getEnergy(void) const;
        int getAttackDamage(void) const;
        void setAttackDamage(int const amount);
        void setName(std::string const name);
};

std::ostream & operator<<(std::ostream &output, ClapTrap & rhs);
#endif