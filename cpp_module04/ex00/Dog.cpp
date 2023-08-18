/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:02:28 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 18:12:42 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Default Dog Constructor Called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog & dog) : Animal(){
    std::cout << "Copy Dog Constructor Called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog & Dog::operator=(const Dog &rhs){
    if (this != &rhs)
        type = rhs.getType();
    return (*this);
}

void    Dog::makeSound(void) const{
    std::cout << "Barf barf!" << std::endl; 
}
