/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:01 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 18:12:38 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog & dog);
        virtual ~Dog();
        Dog & operator=(const Dog &rhs);
        virtual void    makeSound(void) const;
};

#endif