/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:19 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 18:12:52 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include <string>

class Animal
{
    public:
        Animal();
        Animal(const Animal &anim);
        Animal & operator=(const Animal &rhs);
        virtual ~Animal();
        std::string     getType(void) const;
        virtual void    makeSound(void) const;

    protected:
        std::string type;
};

#endif