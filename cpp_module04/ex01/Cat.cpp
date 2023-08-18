/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:11 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 21:46:24 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): numIdea(0){
    std::cout << "Default Cat Constructor Called" << std::endl;
    type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat & cat) : Animal(){
    std::cout << "Copy Cat Constructor Called" << std::endl;
    this->brain = new Brain();
    *this = cat;
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
    delete (this->brain);
}

Cat & Cat::operator=(const Cat & rhs){
    if (this != &rhs)
    {
        *(this->brain) = *(rhs.brain);
        this->numIdea = rhs.numIdea;
    }
    return (*this);
}

void    Cat::makeSound(void) const{
    std::cout << "Meowwwwwwwwww" << std::endl;
}

void    Cat::setIdeas(std::string const str){
    if (numIdea >= 100){
    std::cout << "Idea is Full. Adding New idea Failed." << std::endl;
    return ;
    }
    this->brain->setBrainIdeas(str);
    numIdea++;
}

void    Cat::printIdeas(void) const{
    for (int i = 0; i < this->numIdea; i++){
        std::cout << this->brain->getBrainIdeas(i) << std::endl;
    }
}
