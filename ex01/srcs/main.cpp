/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:04:15 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 01:41:35 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	{
		Data		data(5);
		uintptr_t	ptr;

		ptr = Serializer::serialize(&data);
		std::cout << "Original Address:\t" << &data << std::endl;
		std::cout << "Original value:\t\t" << data.getNum() << std::endl;

		Data	*tmp = Serializer::deserialize(ptr);
		std::cout << "\nAfer conversion:\t" << tmp << std::endl;
		std::cout << "After value:\t\t" << tmp->getNum() << std::endl;
	}
	{
		Data		data(225);
		uintptr_t	ptr;

		ptr = Serializer::serialize(&data);
		std::cout << "\nOriginal Address:\t" << &data << std::endl;
		std::cout << "Original value:\t\t" << data.getNum() << std::endl;

		Data	*tmp = Serializer::deserialize(ptr);
		std::cout << "\nAfer conversion:\t" << tmp << std::endl;
		std::cout << "After value:\t\t" << tmp->getNum() << std::endl;
	}

	return (0);
}
