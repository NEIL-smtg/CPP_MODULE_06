/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:45:49 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 02:03:05 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
	private:
		char	type;
	public:
		C();
		virtual ~C();
		void	print_self(void) const;
		char	getType(void) const;
};

#endif
