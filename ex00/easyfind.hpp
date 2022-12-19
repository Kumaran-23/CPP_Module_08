/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:58:37 by snair             #+#    #+#             */
/*   Updated: 2022/12/19 13:57:23 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>//for find
#include <exception>
#include <vector>
#include <deque>
#include <list>

class NotFoundException: public std::exception
{
	public:
			virtual const char *what() const throw()
			{
				return ("Not found");
			}
};

//c
template< typename T>
typename T::iterator easyfind(T &cont, const int i)
{
	typename T::iterator	ite;
	//cont.begin returns the first element
	//cont.end returns  the past-the-end element
	//find returns the element if it is found inside cont, else returns end
	ite = find(cont.begin(), cont.end(), i);
	//if ite returns end throw exception
	if (ite == cont.end())
	{
		throw (NotFoundException());
	}
	else
	{
		std::cout << *ite << " found in container" << std::endl;
		return (ite);
	}
}

#endif