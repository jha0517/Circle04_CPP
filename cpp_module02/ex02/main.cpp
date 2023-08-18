/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:38:51 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/05 10:38:14 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void    print_red(std::string const str)
{
	std::cout << "\033[1;31m"<< str << "\033[0m" << std::endl;
}

void    print_yellow(std::string const str)
{
	std::cout << std::endl << "\033[1;33m"<< str << "\033[0m" << std::endl;
}

void    print_green(std::string const str)
{
	std::cout << std::endl << "\033[1;32m"<< str << "\033[0m" << std::endl;

}

void    print_blue(std::string const str)
{
	std::cout << "\033[1;34m"<< str << "\033[0m" << std::endl;

}

int	main( void ) 
{
	{
		Fixed m_num1(2);
		Fixed m_num2(1);

		print_green("---------------------------------------------");
		std::cout << "Input : " << m_num1 << " and " << m_num2;
		print_green("---------------------------------------------");
		print_blue("---------------------------------------------");
		print_blue("Comparison Operator : >, <, >=, <=, ==, !=");
		print_blue("---------------------------------------------");
		if (m_num1 > m_num2)
			std::cout << "    " << m_num1 << " > " << m_num2 << std::endl;
		if (m_num1 < m_num2)
			std::cout << "    " << m_num1 << " < " << m_num2 << std::endl;
		if (m_num1 >= m_num2)
			std::cout << "    " << m_num1 << " >= " << m_num2 << std::endl;
		if (m_num1 <= m_num2)
			std::cout << "    " << m_num1 << " <= " << m_num2 << std::endl;
		if (m_num1 == m_num2)
			std::cout << "    " << m_num1 << " == " << m_num2 << std::endl;
		if (m_num1 != m_num2)
			std::cout << "    " << m_num1 << " != " << m_num2 << std::endl;
		print_blue("---------------------------------------------");
		print_blue("Arithmetic Operator : +, -, *, /");
		print_blue("---------------------------------------------");
		std::cout << "    " << m_num1 << " + " << m_num2 << " = " << std::endl;
		std::cout << m_num1 + m_num2 << std::endl;
		std::cout << std::endl;
		std::cout << "    " << m_num1 << " - " << m_num2 << " = " << std::endl;
		std::cout << m_num1 - m_num2 << std::endl;
		std::cout << std::endl;
		std::cout << "    " << m_num1 << " * " << m_num2 << " = " << std::endl;
		std::cout << m_num1 * m_num2 << std::endl;
		std::cout << std::endl;
		std::cout << "    " << m_num1 << " / " << m_num2 << " = " << std::endl;
		std::cout << m_num1 / m_num2 << std::endl;

		print_blue("---------------------------------------------");
		print_blue("Other Operators : i++, ++i, i--, --i");
		print_blue("---------------------------------------------");
		Fixed tmp1;
		tmp1 = Fixed(m_num1);
		Fixed tmp2;
		tmp2 = Fixed(m_num2);
		std::cout << "    Before : " << tmp1 << ", " << tmp2 << std::endl;
		tmp1 = ++tmp2;
		std::cout << "    " << "m_num1 = ++m_num2 (first assign, Second add)" << std::endl;
		std::cout << "    After  : " << tmp1 << ", " << tmp2 << std::endl;
		print_blue("-----------------------------");
		Fixed tmp3;
		tmp3 = Fixed(m_num1);
		Fixed tmp4;
		tmp4 = Fixed(m_num2);
		std::cout << "    Before : " << tmp3 << ", " << tmp4 << std::endl;
		tmp3 = tmp4++;
		std::cout << "    " << "m_num1 = ++m_num2 (first assign, Second add)" << std::endl;
		std::cout << "    After  : " << tmp3 << ", " << tmp4 << std::endl;
		
		print_blue("---------------------------------------------");
		print_blue("Static member functions overload : min / max");
		print_blue("---------------------------------------------");
		std::cout << "    Between  : [" << m_num1 << ", " << m_num2 << "]"<< std::endl;
		std::cout << "    " << "static function max: " << Fixed::max( m_num1, m_num2 ) << std::endl;
		std::cout << "    " << "static function min: " << Fixed::min( m_num1, m_num2 ) << std::endl;
		std::cout << "    const static function max: "<< Fixed::max( Fixed(m_num1), Fixed(m_num2) ) << std::endl;
		std::cout << "    const static function min: "<< Fixed::min( Fixed(m_num1), Fixed(m_num2) ) << std::endl;
	}

	{
		print_red("---------------SUBJECT MAIN---------------------");
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		print_red("---------------------------------------------");
	}
	return 0;
}
