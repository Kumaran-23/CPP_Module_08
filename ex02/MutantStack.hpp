/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:28:03 by snair             #+#    #+#             */
/*   Updated: 2022/12/19 17:28:04 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		    MutantStack() : std::stack<T>()
            {

            }
		    MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy) 
            {

            }
		    ~MutantStack() 
            {

            }
		    MutantStack<T>  &operator=(const MutantStack<T> &stk)
		    {
			    this->c = stk.c;
			    return (*this);
		    }

		    typedef typename std::stack<T>::container_type::iterator iterator;
		    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
            //c is a protected container of stack
		    iterator    begin()
            {
                return (this->c.begin());
            }
            iterator    end()
            {
                return (this->c.end());
            }
            reverse_iterator    rbegin()
            {
                return (this->c.rbegin());
            }
            reverse_iterator    rend()
            {
                return (this->c.rend());
            }
};

#endif