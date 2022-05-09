/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:34:13 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/16 11:34:21 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_pf;
		static const int	_nbFrac = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&operator=(const Fixed&fixed);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
