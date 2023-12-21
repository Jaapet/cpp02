/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:36:37 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/21 23:06:40 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_val;
	static int const	_frac;
public:
	Fixed();
	Fixed(Fixed const &instance);
	Fixed	&operator=(Fixed const &instance);
	~Fixed();
	
	Fixed(int const val);
	Fixed(float const val);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	int					toInt(void) const;
	float				toFloat(void) const;

	bool				operator>(Fixed const &val) const;
	bool				operator<(Fixed const &val) const;
	bool				operator>=(Fixed const &val) const;
	bool				operator<=(Fixed const &val) const;
	bool				operator==(Fixed const &val) const;
	bool				operator!=(Fixed const &val) const;

	Fixed				operator+(Fixed const &val) const;
	Fixed				operator-(Fixed const &val) const;
	Fixed				operator*(Fixed const &val) const;
	Fixed				operator/(Fixed const &val) const;

	Fixed				&operator++(void);
	Fixed				operator++(int);
	Fixed				&operator--(void);
	Fixed				operator--(int);

	static Fixed const	&min(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed const	&max(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &val);

#endif
