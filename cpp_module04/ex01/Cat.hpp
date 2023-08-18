/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:07 by hyunah            #+#    #+#             */
/*   Updated: 2023/02/05 18:15:00 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain   *brain;
    int     numIdea;
public:
    Cat();
    Cat(const Cat & cat);
    virtual         ~Cat();
    Cat &           operator=(const Cat &rhs);
    virtual void    makeSound(void) const;
    void            setIdeas(std::string const str);
    void            printIdeas(void) const;
};

#endif