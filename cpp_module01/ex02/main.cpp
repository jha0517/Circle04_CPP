/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:17:31 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/03 14:03:03 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string str2 = "NEW STRING";
	std::string *strPtr = &str;
	std::string &strRef = str;
	// std::string &strRef = str2; //Can't compile. Reference is acts like constant.
	// std::string &strRef2; //Can't compile. Reference has to be initialised.

	std::cout << "str = \"HI THIS IS BRAIN\"" << std::endl;
	std::cout << "*strPtr = &str" << std::endl;
	std::cout << "&strRef = str" << std::endl;
	std::cout << "\033[1;31mThe memory address of the string variable held by strPtr.\033[0m" << std::endl;
	std::cout << "strPtr : " << strPtr << std::endl;
	std::cout << "\033[1;32mThe memory address of the string variable held by strRef.\033[0m" << std::endl;
	std::cout << "&strRef : " << &strRef << std::endl;

	std::cout << "\033[1;33mThe value of the string variable.\033[0m" << std::endl;
	std::cout << "str : " << str << std::endl;

	std::cout << "\033[1;31mThe value pointed to by strPtr.\033[0m" << std::endl;
	std::cout << "*strPtr : " << *strPtr << std::endl;
	std::cout << "\033[1;32mThe value pointed to by strRef.\033[0m" << std::endl;
	std::cout << "strRef : " << strRef << std::endl;
}