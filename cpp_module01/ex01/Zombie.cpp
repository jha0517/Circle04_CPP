/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:17:20 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/03 10:28:09 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void) : _name("default")
{
	std::cout << this->_name << " Constructer called" << std ::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " Destructor called" << std ::endl;
}
void	Zombie::setName(std::string name){
	this->_name = name;
}


void	Zombie::announce(void) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
