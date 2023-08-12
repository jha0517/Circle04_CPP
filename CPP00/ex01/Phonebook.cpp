/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:51:02 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/12/09 10:44:39 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){
	this->_total = 0;
	return ;
}

Phonebook::~Phonebook(void){
	return ;
}

int	Phonebook::_add(void){
	std::string	str;
	int			i = this->_total % 8;

	std::cout << "\033[1;31m * Contact number "<< i << "\033[0m"<<std::endl;
	if (this->_contact[i].setContact())
		return (1);
	this->_total += 1;
	return (0);
}

void	print_ten(std::string str){
	if (str.length() <= 10)
		std::cout << std::setw(10) << std::right << str;
	else
		std::cout << str.substr(0, 9) << ".";
	std::cout << "|";
}

int	ask_index_for_detail(int total, Contact *contact)
{
	std::string	input;

	std::cout << std::endl << "\033[1;33mEnter index number for details (to quit: q) :\033[0m";
	while (!isequal(input, "q")){
		if (std::cin.eof() == 1)
		{
			std::cin.clear();
			return (1);
		}
		while (getline(std::cin, input))
		{
			if (isequal(input, "q"))
				break ;
			if (std::cin.eof() == 1)
			{
				std::cin.clear();
				return (1);
			}
			if (input.size() == 1 && isdigit(input[0]) && atoi(input.c_str()) < total)
				contact[atoi(input.c_str())].printDetails();
			else
				std::cout << "Contact not found." << std::endl;
			std::cout << "\033[1;33mEnter index number for details (to quit: q) :\033[0m";
		}
	}
	return (0);
}

int	Phonebook::_search(void){
	int	max;

	std::cout << std::endl << "\033[1;31m************ My Awesome PhoneBook ************\033[0m" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	max = (this->_total > 7) ? 8 : this->_total % 8;
	for (int i = 0; i < max; i++)
	{
		std::cout << "|" << std::setw(10)  << i << "|";;
		print_ten(this->_contact[i].getFirstName());
		print_ten(this->_contact[i].getLastName());
		print_ten(this->_contact[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "_____________________________________________" << std::endl;
	if (ask_index_for_detail(this->_total, this->_contact))
		return (1);
	return (0);
}

void	Phonebook::loop (void)
{
	std::string	command;
	int			ret;

	ret = 0;
	std::cout << "\033[1;32mPlease enter ADD, SEARCH or EXIT to use the AwesomePhoneBook :\033[0m";
	while(getline(std::cin, command))
	{
		if (std::cin.eof() == 1)
		{
			std::cin.clear();
			return ;
		}
		if (isequal(command, "ADD"))
			ret = _add();
		else if (isequal(command, "SEARCH"))
			ret = _search();
		else if (isequal(command, "EXIT"))
			break ;
		if (ret)
			break ;
		std::cout << "\033[1;32mPlease enter ADD, SEARCH or EXIT to use the AwesomePhoneBook :\033[0m";
	}
	std::cout << std::endl << "Program exited." << std::endl;
}