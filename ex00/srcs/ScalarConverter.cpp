/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:51:01 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 00:50:43 by suchua           ###   ########.fr       */
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
		std::cout << "\'" << static_cast<char>(n) << "\'" << std::endl;
}

void	print_int(const std::string& s)
{
	std::cout << "int: ";
	try
	{
		const int	n = std::stoi(s);

		std::cout << n << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << "impossible" << '\n';
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << "impossible" << '\n';
	}
}

void	print_float(const std::string& s)
{
	std::cout << "float: ";
	try
	{
		const float	n = std::stof(s);
		if (s.length() < 7 && s.find('.') == std::string::npos)
			std::cout << std::fixed << std::setprecision(1) << n << "f" << std::endl;
		else
			std::cout << n << "f" << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << "impossible" << '\n';
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << "impossible" << '\n';
	}
}

void	print_double(const std::string& s)
{
	std::cout << "double: ";
	try
	{
		const double	n = std::stod(s);

		std::cout << n << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << "impossible" << '\n';
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << "impossible" << '\n';
	}
}

bool	is_pseudo(char *s)
{
	if (!strncmp(s, "nan", 4) || !strncmp(s, "nanf", 5))
		return (true);
	if (!strncmp(s, "inf", 4) || !strncmp(s, "inff", 5))
		return (true);
	if (!strncmp(s, "-inf", 5) || !strncmp(s, "-inff", 6))
		return (true);
	if (!strncmp(s, "+inf", 5) || !strncmp(s, "+inff", 6))
		return (true);
	return (false);
}

bool	valid_str(char *s)
{
	if (is_pseudo(s))
		return (true);

	int	dot = 0;
	int	j = 0;

	while (s[j] == '+' || s[j] == '-')
		++j;
	if (j > 1)
		return (false);
	for (int i = j; s[i]; i++)
	{
		if (s[i] == '.')
			dot++;
		if (s[i] == '.' && !s[i + 1])
			return (false);
		if (dot > 1)
			return (false);
		if (s[i] != '.' && s[i] != 'f' && (s[i] < '0' || s[i] > '9'))
			return (false);
	}
	return (true);
}

void	ScalarConverter::convert(char *s)
{
	if (!valid_str(s))
	{
		std::cerr << "Invalid argument" << std::endl;
		return ;
	}
	print_char(s);
	print_int(s);
	print_float(s);
	print_double(s);
}
