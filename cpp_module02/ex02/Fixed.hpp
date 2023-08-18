/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:18:23 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/04 22:13:40 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <string>
# include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const & src);
	~Fixed(void);
	Fixed &	operator=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);
	static const Fixed & max(Fixed const &a, Fixed const &b);
	static Fixed & max(Fixed &a, Fixed &b);
	static const Fixed & min(Fixed const &a, Fixed const &b);
	static Fixed & min(Fixed &a, Fixed &b);
	Fixed	operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(void);
	Fixed	operator--(int);
	bool	operator<(Fixed const & rhs)const;
	bool	operator>(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs)const;
	bool	operator>=(Fixed const & rhs)const;
	bool	operator==(Fixed const & rhs)const;
	bool	operator!=(Fixed const & rhs)const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

private:
	int					raw;
	static const int	bits = 8;
};

std::ostream & operator<<(std::ostream &output, Fixed const & rhs);
#endif