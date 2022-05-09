/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:36:59 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/16 11:37:02 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static std::string	boolToString(bool b)
{
	if (b)
		return ("true");
	return ("false");
}

int	main(void)
{
	Point	a(Fixed(0), Fixed(0));
	Point	b(Fixed(10), Fixed(0));
	Point	c(Fixed(0), Fixed(5));
	Point	p1(Fixed(1), Fixed(1));
	Point	p2(Fixed(10), Fixed(5));

	std::cout << "a" << a << "  b" << b << "  c" << c << std::endl;
	std::cout << "Is p1" << p1 << " in (a,b,c) ? " << boolToString(bsp(a, b, c, p1)) << std::endl;
	std::cout << "Is p2" << p2 << " in (a,b,c) ? " << boolToString(bsp(a, b, c, p2)) << std::endl;
	std::cout << "Is a" << a << " in (a,b,c) ? " << boolToString(bsp(a, b, c, a)) << std::endl;
	return (0);
}
