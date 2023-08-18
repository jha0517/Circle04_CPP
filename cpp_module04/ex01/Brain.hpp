/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunah <hyunah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:01:17 by hyunah            #+#    #+#             */
/*   Updated: 2022/12/15 06:22:21 by hyunah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>
# include <string>

class Brain
{
private:
    std::string ideas[100];
    int numIdea;
public:
    Brain();
    Brain(const Brain & brain);
    ~Brain();
    void        setBrainIdeas(std::string const str);
    std::string getBrainIdeas(int const index) const;
    Brain & operator=(const Brain &rhs);
};

#endif