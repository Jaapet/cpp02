/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:36:24 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/21 15:14:17 by ndesprez         ###   ########.fr       */
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

Fixed::Fixed(int const val):_val(val << this->_frac) //basic bitshifting
{
	std::cout << "Int const constructor." << std::endl;
}

Fixed::Fixed(float const val):_val(roundf(val * (1 << this->_frac))) //full value * 2^_frac -- sets the point at the right, then rounds the remaining
{
	std::cout << "Float const constructor." << std::endl;
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

int	Fixed::toInt(void) const
{
	return (this->_val >> this->_frac); //basic bitshifting
}

float	Fixed::toFloat(void) const //full value divided by 2^-frac
{
	return (this->_val / static_cast<float>(1 << this->_frac)); //1 << _frac = shifting 1 to the equivalent dozens to the number of elements after the point
}

std::ostream	&operator<<(std::ostream &str, Fixed const &val)
{
	return (str << val.toFloat());
}
