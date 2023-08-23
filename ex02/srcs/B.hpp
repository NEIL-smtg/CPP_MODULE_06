/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:45:49 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 02:02:52 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base
{
	private:
		char	type;
	public:
		B();
		virtual ~B();
		void	print_self(void) const;
		char	getType(void) const;
};

#endif
