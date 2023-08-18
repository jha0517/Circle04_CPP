/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:17:21 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/05 09:10:19 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void    print_red(std::string const str)
{
	std::cout << "\033[1;31m"<< str << "\033[0m" << std::endl;
}

int main( void ) {
  print_red("********** TEST IN SUBJECT ****************");
  Fixed a;
  // uncomment to see all a,b,c has different address but the value was copied.
  // a.setRawBits(4); 
  // std::cout << a.getRawBits() << std::endl;
  // std::cout << "a adresss : " << &a << std::endl;
  print_red("-------------------------");
  Fixed b( a );
  // std::cout << "b adresss : " << &b << std::endl;
  // std::cout << b.getRawBits() << std::endl;
  print_red("-------------------------");
  Fixed c;
  // std::cout << "c adresss : " << &c << std::endl;
  // std::cout << c.getRawBits() << std::endl;
  print_red("-------------------------");
  c = b;
  print_red("-------------------------");
  // std::cout << "c" << &c << std::endl;
  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;
  return 0;
}