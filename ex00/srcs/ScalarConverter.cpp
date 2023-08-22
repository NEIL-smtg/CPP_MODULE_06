/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:51:01 by suchua            #+#    #+#             */
/*   Updated: 2023/08/23 05:27:57 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	print_char(char *s)
{
	const int	n = atoi(s);

	std::cout << "char: ";
	if (*s < '0' || *s > '9')
		std::cout << "impossible" << std::endl;
	else if (n < 32 || n > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "\'" << (char) n << "\'" << std::endl;
}

void	print_int(char *s)
{
	const int	n = atoi(s);

	std::cout << "int: ";
	if (*s < '0' || *s > '9')
		std::cout << "impossible" << std::endl;
	else
		std::cout << n << std::endl;
}

void	print_float(char *s)
{
	const float	n = atof(s);
	int			len = 1;
	
	std::cout << "float: ";
	if (std::isnan(n))
		std::cout << n << "f" << std::endl;
	else if ((*s >= '0' && *s <= '9'))
	{
		if (strchr(s, '.'))
		{
			int back = (int) strlen(strchr(s, '.') + 1);
			int front = (int) strlen(s) - back;
			if (front + back > 8)
				len = 8 - front;
			else
				len = back;
		}
		std::cout << std::fixed << std::setprecision(len) << n << "f" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	print_double(char *s)
{
	const double	n = atof(s);
	int				len = 1;
	
	std::cout << "double: ";
	if (std::isnan(n))
		std::cout << n << std::endl;
	else if ((*s >= '0' && *s <= '9'))
	{
		if (strchr(s, '.'))
		{
			int back = (int) strlen(strchr(s, '.') + 1);
			int front = (int) strlen(s) - back;
			if (front + back > 16)
				len = 16 - front;
			else
				len = back;
		}
		std::cout << std::fixed << std::setprecision(len) << n << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarConverter::convert(char *s)
{
	print_char(s);
	print_int(s);
	print_float(s);
	print_double(s);
}
