/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:39:45 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/04 19:33:50 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int	main()
{
	Zombie	*zombies;
	int		num = 10;
	zombies = zombieHorde(num, "foo" );

	for (int i = 0; i < num; i++)
	{
		zombies[i].announce();
	}
	if (zombies)
		delete [] zombies;
	return (0);
}