/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:19 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 21:24:22 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_H
# define WrongAnimal_H
# include <iostream>
# include <string>

class WrongAnimal
{
private:
    /* data */
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &anim);
    WrongAnimal & operator=(const WrongAnimal &rhs);
    ~WrongAnimal();
    std::string getType(void) const;
    void    makeSound(void) const;
};

#endif