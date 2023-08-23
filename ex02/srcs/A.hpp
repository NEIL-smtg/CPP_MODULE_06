/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:45:49 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 02:01:48 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base
{
	private:
		char	type;
	public:
		A();
		virtual ~A();
		void	print_self(void) const;
		char	getType(void) const;
};

#endif
