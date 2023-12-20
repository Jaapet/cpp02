/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:36:37 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/20 17:24:03 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
