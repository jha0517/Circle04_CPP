/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:13:50 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/04 19:28:58 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <sstream>

std::string NumberToString ( int Number )
{
	std::ostringstream ss;
	ss << Number;
	return ss.str();
}
Zombie*	zombieHorde( int N, std::string name ){
	if (N <= 0)
		return (NULL);
	Zombie	*zombies = new Zombie[N];
	std::string num;
	for (int i = 0; i < N; i++){
		zombies[i].setName(name + NumberToString(i + 1));
	}
	return (zombies);
}
