/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:36:37 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/21 15:05:35 by ndesprez         ###   ########.fr       */
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
	const static int	_frac;
public:
	Fixed();
	Fixed(Fixed const &instance);
	Fixed	&operator=(Fixed const &instance);
	~Fixed();
	
	Fixed(int const val);
	Fixed(float const val);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &val);

#endif
