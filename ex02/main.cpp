/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:35:15 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/16 11:35:20 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void	printTitle(std::string title)
{
	std::string	toPrint;
	int	size = 40;
	int	n;

	toPrint = " " + title + " ";
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n);
	std::cout << std::setfill('=') << std::setw(size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;

}

static std::string	boolToString(bool b)
{
	if (b)
		return ("true");
	return ("false");
}

static void	testComparison(void)
{
	Fixed	a(6.95f);
	Fixed	b(7);

	printTitle("COMPARISONS");
	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a > b ? " << boolToString(a > b) << std::endl;
	std::cout << "  a < b ? " << boolToString(a < b) << std::endl;
	std::cout << "  a >= b ? " << boolToString(a >= b) << std::endl;
	std::cout << "  a <= b ? " << boolToString(a <= b) << std::endl;
	std::cout << "  a == b ? " << boolToString(a == b) << std::endl;
	std::cout << "  a != b ? " << boolToString(a != b) << std::endl;
	b = a;
	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a > b ? " << boolToString(a > b) << std::endl;
	std::cout << "  a < b ? " << boolToString(a < b) << std::endl;
	std::cout << "  a >= b ? " << boolToString(a >= b) << std::endl;
	std::cout << "  a <= b ? " << boolToString(a <= b) << std::endl;
	std::cout << "  a == b ? " << boolToString(a == b) << std::endl;
	std::cout << "  a != b ? " << boolToString(a != b) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "  a > a ? " << boolToString(a > a) << std::endl;
	std::cout << "  a < a ? " << boolToString(a < a) << std::endl;
	std::cout << "  a >= a ? " << boolToString(a >= a) << std::endl;
	std::cout << "  a <= a ? " << boolToString(a <= a) << std::endl;
	std::cout << "  a == a ? " << boolToString(a == a) << std::endl;
}

static void	testArithmetic(void)
{
	Fixed	a(6.95f);
	Fixed	b(7);

	printTitle("ARITHMETIC");
	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a + b = " << a + b << std::endl;
	std::cout << "  a + a = " << a + a << std::endl;
	std::cout << "  a - b = " << a - b << std::endl;
	std::cout << "  a * b = " << a * b << std::endl;
	std::cout << "  a / b = " << a / b << std::endl;
}

static void	testIncrement(void)
{
	Fixed	a(1);

	printTitle("INCREMENT");
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a.op--(5) = " << a.operator--(5) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a.op++(500) = " << a.operator++(500) << std::endl;
	std::cout << "a = " << a << std::endl;
}

static void	testMaxMin(void)
{
	Fixed		a(-10.25f);
	Fixed		b(-9);
	Fixed const	c(-9);

	printTitle("MAX/MIN");
	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  max(a,b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "  min(a,b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "a = " << a << "  c(const) = " << b << std::endl;
	std::cout << "  max(a,c) = " << Fixed::max(a, c) << std::endl;
	std::cout << "  min(a,c) = " << Fixed::min(a, c) << std::endl;
}

static void	testSubject(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	printTitle("SUBJECT");
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
}

int	main(void)
{
	testComparison();
	testArithmetic();
	testIncrement();
	testMaxMin();
	testSubject();
	return (0);
}
