/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:03:21 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 02:04:39 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"
#include <iostream>

C::C()
{
	this->type = 'C';
}

C::~C()
{
}

void	C::print_self(void) const
{
	std::cout << "I am " << this->type << std::endl;
}

char	C::getType(void) const
{
	return this->type;
}
