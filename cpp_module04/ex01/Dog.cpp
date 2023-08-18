/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:02:28 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 21:38:06 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): numIdea(0)
{
    std::cout << "Default Dog Constructor Called" << std::endl;
    type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog & dog) : Animal(){
    std::cout << "Copy Dog Constructor Called" << std::endl;
    this->brain = new Brain();
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
    delete (this->brain);
}

Dog & Dog::operator=(const Dog & rhs){
    std::cout << "Operator Dog Constructor Called" << std::endl;
    if (this != &rhs)
    {
        *(this->brain) = *(rhs.brain);
        this->numIdea = rhs.numIdea;
    }
    return (*this);
}

void    Dog::makeSound(void) const{
    std::cout << "Barf barf!" << std::endl; 
}

void    Dog::setIdeas(std::string const str){
    if (numIdea >= 100){
    std::cout << "Idea is Full. Adding New idea Failed." << std::endl;
    return ;
    }
    this->brain->setBrainIdeas(str);
    numIdea++;
}

void    Dog::printIdeas(void) const{
    for (int i = 0; i < this->numIdea; i++){
        std::cout << this->brain->getBrainIdeas(i) << std::endl;
    }
}
