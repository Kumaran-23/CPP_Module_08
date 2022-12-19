/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:29:55 by snair             #+#    #+#             */
/*   Updated: 2022/12/19 17:29:55 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iterator>

class Span
{
	public:
			Span();
			Span(unsigned int N);
			Span(const Span &span);
			~Span();
			Span &operator=(const Span &span);
			void addNumber(int num);
			long	shortestSpan() const;
			long	longestSpan() const;
			void	addNumberRandom(unsigned int lower_range, unsigned int upper_range);
			void	addNumberVec(std::vector<int>::iterator begin, std::vector<int>::iterator end);
			void	printOrdered(void);
	private:
			unsigned int	_size;
			std::vector<int>	_span;
	
	class SpanIsFullException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class NotFoundException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif