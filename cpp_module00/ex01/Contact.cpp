/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:17:20 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/12/08 11:42:50 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	return ;
}

Contact::~Contact(void){
	return ;
}

int	iswhitespace(char a){
	if (!a)
		return (0);
	if (a == '\t' || a == ' ' || a == '\n' || a == '\v' || a == '\f' || a == '\r')
		return (1);
	return (0);
}

std::string	remove_useless_whitespace(std::string str){
	int	i;

	i = 0;
	while (iswhitespace(str[0])){
		str.erase(str.begin());
	}
	while (iswhitespace(str[str.length() -1])){
		str.erase(str.begin() + (str.length() - 1));
	}
	while(str[i])
	{
		if (iswhitespace(str[i]))
		{
			while (iswhitespace(str[i]))
			{
				str.erase(str.begin() + i);
			}
			str.insert(str.begin() + i,' ');
		}
		i++;
	}
	return (str);
}

void	Contact::printDetails(void) const{
	std::cout << "-------------------------------------" << std::endl;
	std::cout << " 1. First name    : " << this->_firstName << std::endl;
	std::cout << " 2. Last name     : " << this->_lastName << std::endl;
	std::cout << " 3. Nick name     : " << this->_nickName << std::endl;
	std::cout << " 4. Phone number  : " << this->_phoneNumber << std::endl;
	std::cout << " 5. Darkes secret : " << this->_darkestSecret << std::endl;
	std::cout << "-------------------------------------" << std::endl;
}

std::string	Contact::getFirstName(void) const{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const{
	return (this->_nickName);
}

std::string	getNonEmptyVariable(std::string var)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "  " << var << " : ";
		getline(std::cin, str);
		if (std::cin.eof() == 1)
		{
			std::cin.clear();
			return (str);
		}
		str = remove_useless_whitespace(str);
	}
	return (str);
}

int Contact::setContact(void){

	this->_firstName = getNonEmptyVariable("First name");
	if (this->_firstName.empty())
		return (1);
	this->_lastName = getNonEmptyVariable("Last name");
	if (this->_lastName.empty())
		return (1);
	this->_nickName = getNonEmptyVariable("Nick name");
	if (this->_nickName.empty())
		return (1);
	this->_phoneNumber = getNonEmptyVariable("Phone Number");
	if (this->_phoneNumber.empty())
		return (1);
	this->_darkestSecret = getNonEmptyVariable("Darkest Secret");
	if (this->_darkestSecret.empty())
		return (1);

	return (0);
}