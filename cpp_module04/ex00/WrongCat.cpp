/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:11 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 21:35:30 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "Default WrongCat Constructor Called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & WrongCat) : WrongAnimal(){
    std::cout << "Copy WrongCat Constructor Called" << std::endl;
    *this = WrongCat;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & rhs){
    if (this != &rhs)
        type = rhs.getType();
    return (*this);
}

void    WrongCat::makeSound(void) const{
    std::cout << "WRONG CAT Meowwwwwwwwww" << std::endl;
}