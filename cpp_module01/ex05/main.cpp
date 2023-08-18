/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:09:57 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/12/08 20:51:17 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl h1;

	std::cout << "\033[1;32mHARL DEBUG\033[0m" << std::endl;
	h1.complain("DEBUG");

	std::cout << "\033[1;32mHARL INFO\033[0m" << std::endl;
	h1.complain("INFO");

	std::cout << "\033[1;32mHARL WARNNG\033[0m" << std::endl;
	h1.complain("WARNING");

	std::cout << "\033[1;32mHARL ERROR\033[0m" << std::endl;
	h1.complain("ERROR");
	
	return (0);
}