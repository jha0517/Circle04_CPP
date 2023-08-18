/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:41:55 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/03 15:45:10 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB(void){
	return ;
}

void HumanB::attack(void)
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " has no weapon." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
