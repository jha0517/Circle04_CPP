/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:51:07 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/15 10:30:04 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Brain.hpp"
# include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
    Brain *brain;
    int numIdea;
public:
    Cat();
    Cat(const Cat & cat);
    virtual         ~Cat();
    Cat &           operator=(const Cat &rhs);
    virtual void    makeSound() const;
    void            setIdeas(std::string const str);
    void            printIdeas() const;
};

#endif