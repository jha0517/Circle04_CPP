/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:17:21 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/05 10:13:59 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void    print_red(std::string const str)
{
	std::cout << "\033[1;31m"<< str << "\033[0m" << std::endl;
}

int main( void ) {
  {
    print_red("********** TEST IN SUBJECT ****************");
    
    Fixed a;
    print_red("-------------------------");
    Fixed const b( 10 );
    print_red("-------------------------");
    Fixed const c( 42.42f );
    print_red("-------------------------");
    Fixed const d( b );
    
    print_red("-------------------------");
    a = Fixed( 1234.4321f );
    print_red("-------------------------");

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    print_red("-------------------------");

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    print_red("-------------------------");
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    std::cout << "d is " << d.toFloat() << " as float" << std::endl;
    print_red("-------------------------");
  }
  {
    std::cout << std::endl;
    print_red("********** MY TEST ****************");
    Fixed a(8388607);

    std::cout << "Fixed MAX is " << a.toInt() << " as integer" << std::endl;
    print_red("-------------------------");
    Fixed b(-8388608);
    std::cout << "Fixed MIN is " << b.toInt() << " as integer" << std::endl;
    std::cout << std::endl;
    print_red("--FIXED FLOAT -> PRECISION PROB --");
    Fixed c(3.5f);
    std::cout << "Fixed c is " << c.toFloat() << " as float" << std::endl;
    print_red("-------------------------");
    Fixed d(5.3f);
    std::cout << "Fixed d is " << d.toFloat() << " as float" << std::endl;
    print_red("-------------------------");
  }
  return 0;
}