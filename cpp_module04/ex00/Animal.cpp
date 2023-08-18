/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:15 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 18:12:13 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Default Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal & anim){
    std::cout << "Copy Animal Constructor Called" << std::endl;
    *this = anim;
}

Animal & Animal::operator=(const Animal &rhs){
    if (this != &rhs)
        type = rhs.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}


std::string Animal::getType(void) const{
    return (this->type);
}

void    Animal::makeSound(void) const {
    std::cout << "Default Animal Sound" << std::endl;
}