/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:19:10 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/04 22:13:46 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void){
	this->raw = 0;
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void){
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src){
	// std::cout << "Copy constructor called for [" << src << "]" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int m_i){
	// std::cout << "Int constructor called for [" << m_i << "]" << std::endl;
	this->raw = static_cast<int>(roundf((m_i << bits)));
	return ;
}

Fixed::Fixed(const float m_f){
	// std::cout << "Float constructor called for [" << m_f << "]" << std::endl;
	this->raw = static_cast<int>(roundf((m_f * (1<< bits))));
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs){
	// std::cout << "Copy assignment operator called" << std::endl;
	this->raw = rhs.raw;
	return (*this);
}

float Fixed::toFloat( void ) const{
	return ((static_cast<float>(this->raw / (float)(1 << 8))));
}

int Fixed::toInt( void ) const{
	return (this->raw >> 8);
}

int Fixed::getRawBits(void) const{
	return (this->raw);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed const & rhs) const{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const{
	return (this->getRawBits() != rhs.getRawBits());
}

void	Fixed::setRawBits(int const raw){
	this->raw = raw;
}

Fixed	Fixed::operator+(Fixed const & rhs){
	Fixed result;
	result.setRawBits(raw + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const & rhs){
	Fixed result;
	result.setRawBits(raw - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const & rhs){
	Fixed result;
	result.setRawBits((raw * rhs.raw) >> bits);
	return (result);
}

Fixed	Fixed::operator/(Fixed const & rhs){
	Fixed result;
	int a = this->raw;
	int b = rhs.raw;
	if (b == 0)
	{
		std::cout << "Can not divide by 0" << std::endl;
		return (Fixed());
	}
	while (a - b >= 0)
	{
		int x = 0;
		while (a - (b << 1 << x) >= 0)
			x++;
		result.setRawBits(1<< x << bits);
		a -= (b << x);
	}
	if ((this->bits >= 0) != (rhs.bits >= 0))
		result.raw *= -1;
	return (result);
}

Fixed Fixed::operator++(void){
	++raw;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed	temp(*this);

	++(*this);
	return (temp);
}

Fixed Fixed::operator--(void){
	--raw;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed	temp(*this);

	--(*this);
	return (temp);
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}
