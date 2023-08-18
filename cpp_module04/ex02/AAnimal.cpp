/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:15 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 21:34:52 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "Default AAnimal Constructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & anim){
    std::cout << "Copy AAnimal Constructor Called" << std::endl;
    *this = anim;
}

AAnimal & AAnimal::operator=(const AAnimal &rhs){
    if (this != &rhs)
        type = rhs.getType();
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor Called" << std::endl;
}


std::string AAnimal::getType() const{
    return (this->type);
}

void    AAnimal::makeSound() const {
    std::cout << "Default AAnimal Sound" << std::endl;
}