/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:02:31 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 02:04:31 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include <iostream>

B::B()
{
	this->type = 'B';
}

B::~B()
{
}

void	B::print_self(void) const
{
	std::cout << "I am " << this->type << std::endl;
}

char	B::getType(void) const
{
	return this->type;
}
