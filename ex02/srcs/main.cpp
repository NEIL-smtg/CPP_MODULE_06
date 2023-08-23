/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:53:21 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 02:31:13 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <stdlib.h>

Base	*generate(void)
{
	int	ran = rand() % 100 + 1;

	if (ran % 3 == 1)
	{
		std::cout << "Generated A" << std::endl;
		return (dynamic_cast<Base*>(new A()));
	}
	else if (ran % 3 == 2)
	{
		std::cout << "Generated B" << std::endl;
		return (dynamic_cast<Base*>(new B()));
	}
	else
	{
		std::cout << "Generated C" << std::endl;
		return (dynamic_cast<Base*>(new C()));
	}
}

void	identify(Base* p)
{
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a)
		a->print_self();
	if (b)
		b->print_self();
	if (c)
		c->print_self();
}

void	identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}


int	main(void)
{
	{
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			Base	*ptr = generate();
			identify(ptr);
			identify(*ptr);
			delete ptr;
			std::cout << std::endl;
		}
	}
	return 0;
}
