/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:39:45 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/03 10:15:50 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie *stack_z1 = newZombie("Heap_zombie");
	stack_z1->announce();
	delete stack_z1;
	
	std::cout << std::endl;

	randomChump("Stack_zombie");
	std::cout << std::endl;

	return (0);
}