/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:01:55 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/15 09:32:03 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : numIdea(0)
{
    std::cout << "Default Brain Constructor Called" << std::endl;
}

Brain::Brain(const Brain & brain){
    std::cout << "Copy Brain Constructor Called" << std::endl;
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Default Brain Destructor Called" << std::endl;
}

std::string Brain::getBrainIdeas(int const index) const{
    return (this->ideas[index]);
}


Brain & Brain::operator=(const Brain &rhs){
    int max = (this->numIdea > rhs.numIdea) ? this->numIdea : rhs.numIdea;
    if (this != &rhs)
    {
        for (int i = 0; i < max; i++)
        {
            this->ideas[i] = rhs.getBrainIdeas(i);
        }
    }
    return (*this);
}

void    Brain::setBrainIdeas(std::string const str){
    if (numIdea >= 100){
        std::cout << "Too much Idea" << std::endl;
        return ;
    }
    this->ideas[numIdea] = str;
    numIdea++;
}

