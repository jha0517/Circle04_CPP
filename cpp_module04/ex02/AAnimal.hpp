/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:19 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/15 10:17:28 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_H
# define AAnimal_H
# include <iostream>
# include <string>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &anim);
        AAnimal & operator=(const AAnimal &rhs);
        virtual ~AAnimal();
        std::string     getType() const;
        virtual void    makeSound() const = 0;
};

#endif