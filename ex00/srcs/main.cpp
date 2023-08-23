/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:51:07 by suchua            #+#    #+#             */
/*   Updated: 2023/08/23 17:57:22 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 2)
	{
		std::cout << "Incorect number of arguments\n";
		return (1);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
