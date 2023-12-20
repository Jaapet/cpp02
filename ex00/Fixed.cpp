/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:36:24 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/20 17:21:21 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac = 8;

Fixed::Fixed():_val(0)
{
	std::cout << "Default constructor." << std::endl;
}

Fixed::Fixed(Fixed const &instance)
{
	std::cout << "Copy constructor." << std::endl;
	*this = instance;
}

Fixed	&Fixed::operator=(Fixed const &instance)
{
	std::cout << "Assignment operator." << std::endl;
	this->_val = instance.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor." << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Getter." << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Setter." << std::endl;
	this->_val = raw;
}
