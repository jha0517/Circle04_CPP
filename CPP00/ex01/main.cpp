/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:55:25 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/12/08 10:20:52 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.hpp"

int	isequal(std::string a, std::string b)
{
	char a_upper;
	char b_upper;

	if (a.size() != b.size())
		return (0);
	for (unsigned int i = 0; i < b.size(); i++)
	{
		a_upper = toupper(a[i]);
		b_upper = toupper(b[i]);
		if (a_upper != b_upper)
		{	return (0);}
	}
	return (1);
}

int main(void){
	Phonebook book;

	book.loop();
	return (0);
}