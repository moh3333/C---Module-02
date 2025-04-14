/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:43:51 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/14 16:52:50 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( Fixed( 5 ) / Fixed( 2 ) );
	std::cout << a << std::endl;
	a.setRawBits(0);
	std::cout << "b: " << b << std::endl;
	std::cout << b/a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}