/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:01 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/15 10:30:12 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain   *brain;
    int numIdea;
public:
    Dog();
    Dog(const Dog & dog);
    virtual         ~Dog();
    Dog &           operator=(const Dog &rhs);
    virtual void    makeSound() const;
    void            setIdeas(std::string const str);
    void            printIdeas() const;
};

#endif