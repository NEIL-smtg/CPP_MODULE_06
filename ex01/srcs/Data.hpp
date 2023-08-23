/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:39:21 by suchua            #+#    #+#             */
/*   Updated: 2023/08/24 01:39:49 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	public:
		Data(int num);
		~Data();
		Data(const Data& other);
		Data&	operator=(const Data& other);
		int	getNum() const;
	private:
		int	num;	
};

#endif
