/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:58:37 by snair             #+#    #+#             */
/*   Updated: 2022/12/15 20:52:55 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <cstring>
#include <array>
#include <deque>
#include <list>

//c
template <typename T>
typename T::iterator easyfind(T &cont, const int i)
{
	typename T::iterator ite = std::find(cont.begin(), cont.end(), i);
	if (ite == cont.end())
	{
		std::cout << "Number not found" << std::endl;
	}
	else
	{
		std::cout << "Found number " << *ite << " at index no: "<< i << std::endl;
		return (ite);
	} 
}


#endif