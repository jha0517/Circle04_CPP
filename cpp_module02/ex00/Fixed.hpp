/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:18:23 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/04 18:26:44 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <string>

class Fixed {

public:
	Fixed(void); //Default constructor
	Fixed(Fixed const & src); //Copy constructor
	~Fixed(void); //Destructor

	Fixed &	operator=(Fixed const & rhs); //Copy assignment operator
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	raw;
	static const int bits = 8;
};

#endif