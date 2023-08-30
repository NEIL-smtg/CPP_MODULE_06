/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:04:21 by suchua            #+#    #+#             */
/*   Updated: 2023/08/30 19:14:39 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

/*
	reinterpret_cast: 
			This cast is a low-level operation
			that simply reinterprets the bits of the object,
			treating it as if it were of a different type.
			While it's efficient and might work for simple scenarios,
			it doesn't perform any runtime type checking or ensure type safety.
			It's generally considered unsafe when dealing with 
			polymorphic types and can lead to undefined behavior if misused.
	
	dynamic_cast:
			This cast is designed for polymorphic types
			(types with at least one virtual function)
			and performs runtime type checking to ensure
			that the cast is valid based on the class hierarchy.
			It's safer than reinterpret_cast when working with
			inheritance and polymorphism,
			as it prevents improper type conversions.
*/
