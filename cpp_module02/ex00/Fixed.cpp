/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:19:10 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/05 09:05:37 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void    print_green(std::string const str)
{
	std::cout << "\033[1;32m"<< str << "\033[0m" << std::endl;

}

void    print_blue(std::string const str)
{
	std::cout << "\033[1;34m"<< str << "\033[0m" << std::endl;

}

void    print_yellow(std::string const str)
{
	std::cout << "\033[1;33m"<< str << "\033[0m" << std::endl;
}

Fixed::Fixed(void){
	this->raw = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src){
	print_yellow("Copy constructor called");
	*this = src;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs){
	print_green("Copy assignment operator called ( = )");
	if (this != &rhs)
		raw = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const{
	print_blue("getRawBits member function called");
	return (this->raw);
}

void Fixed::setRawBits(int const raw){
	this->raw = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return ;
}
