/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:33:23 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/03 10:28:05 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
public:

	Zombie	(void);
	~Zombie	(void);

	void 	announce(void) const;
	void	setName(std::string name);

private:
	std::string _name;
};

Zombie*	zombieHorde( int N, std::string name);

#endif