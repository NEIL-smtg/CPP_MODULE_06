/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:59:45 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 02:04:03 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include <iostream>

A::A()
{
	this->type = 'A';
}

A::~A()
{
}

void	A::print_self(void) const
{
	std::cout << "I am " << this->type << std::endl;
}

char	A::getType(void) const
{
	return this->type;
}
