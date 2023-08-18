/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:07 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/14 21:23:11 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat();
    WrongCat(const WrongCat & WrongCat);
    ~WrongCat();
    WrongCat & operator=(const WrongCat &rhs);
    void    makeSound(void) const;
};

#endif