/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:11 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 18:12:48 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Default Cat Constructor Called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat & cat) : Animal(){
    std::cout << "Copy Cat Constructor Called" << std::endl;
    *this = cat;
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs){
    if (this != &rhs)
        type = rhs.getType();
    return (*this);
}

void    Cat::makeSound(void) const{
    std::cout << "Meowwwwwwwwww" << std::endl;
}