/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:09:57 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/12/08 21:17:19 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2){
		std::cout << "There should be one parameter : [DEBUG / INFO / WARNING / ERROR] in capital." << std::endl;
		return (0);
	}
	Harl		h1;
	int			input = -1;
	std::string state[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	for	(int i = 0; i < 4; i++)
	{
		if (av[1] == state[i])
			input = i;
	}
	switch (input)
	{
		case 0 :
			h1.complain("DEBUG");
		case 1 :
			h1.complain("INFO");
		case 2 :
			h1.complain("WARNING");
		case 3 : {
			h1.complain("ERROR");
			break ;
		}
		default : {
			std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
			break ;
		}
	}
	return (0);
}