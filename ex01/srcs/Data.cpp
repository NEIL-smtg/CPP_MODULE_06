/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:40:14 by suchua            #+#    #+#             */
/*   Updated: 2023/08/30 19:15:12 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int num)
{
	this->num = num;
}

Data::~Data(){}

Data::Data(const Data& other)
{
	if (this != &other)
		this->num = other.num;
}

Data&	Data::operator=(const Data& other)
{
	if (this != &other)
		this->num = other.num;
	return *this;
}

int	Data::getNum() const
{
	return this->num;	
}
