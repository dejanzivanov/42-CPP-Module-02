/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:37:18 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/16 11:37:22 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point(void);
		Point(const Point &point);
		Point(const Fixed &fixedX, const Fixed &fixedY);
		~Point();

		float	getX(void) const;
		float	getY(void) const;
		Point &operator=(const Point &point);
		static float	signThree(const Point &a, const Point &b, const Point &c);
};

std::ostream &operator<<(std::ostream &o, const Point &point);
bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif
