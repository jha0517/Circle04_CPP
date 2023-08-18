/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:15 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 21:34:52 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Default WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & anim){
    std::cout << "Copy WrongAnimal Constructor Called" << std::endl;
    *this = anim;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs){
    if (this != &rhs)
        type = rhs.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}


std::string WrongAnimal::getType(void) const{
    return (this->type);
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "Default WrongAnimal Sound" << std::endl;
}