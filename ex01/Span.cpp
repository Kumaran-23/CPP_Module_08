/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:29:47 by snair             #+#    #+#             */
/*   Updated: 2022/12/19 17:29:48 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->_size = 0;
}

Span::Span(unsigned int N)
{
	this->_size = N;
}

Span::Span(const Span &span)
{
	this->_size = span._size;
	this->_span = span._span;
	*this = span;
}

Span::~Span()
{
	
}

Span	&Span::operator=(const Span &span)
{
	this->_size = span._size;
	this->_span = span._span;
	return (*this);
}

void Span::addNumber(int num)
{
	if (this->_span.size() >= this->_size)
        throw SpanIsFullException();
	this->_span.push_back(num);//adds num to the end of vector _span
}

static long minus(long i, long j)
{
	return ((i - j));
}

/*static void print(std::vector <long> const &a) 
{
   std::cout << "The vector elements are : ";

   for(unsigned int i=0; i < a.size(); i++)
   		std::cout << a.at(i) << ' ';
   std::cout << std::endl;
}*/

long Span::shortestSpan(void) const
{
	if (this->_span.empty() || this->_span.size() < 2)
		throw NotFoundException();
	std::vector<long> temp(this->_span.size());
	std::copy(this->_span.begin(), this->_span.end(), temp.begin());//to copy a range of elements from one container to another
	std::sort(temp.begin(), temp.end());//sorts the elements in ascending order from the first to the last element
	std::transform(temp.begin() + 1, temp.end(), temp.begin(), temp.begin(), minus);//applies minus on temp, and stores the value back into temp
	return (*(std::min_element(temp.begin(), temp.end() - 1)));//returns the min value of temp after transform
}

long Span::longestSpan() const
{
    if (this->_span.empty() || this->_span.size() < 2)
		throw NotFoundException();
	long min;
	long max;
	min = *(std::min_element(this->_span.begin(), this->_span.end()));//returns the min value of vector span
	max = *(std::max_element(this->_span.begin(), this->_span.end()));//returns the max value of vector span
	return (max - min);
}

void	Span::addNumberRandom(unsigned int lower_range, unsigned int upper_range)
{
	srand(time(NULL));
	long fill = (upper_range - lower_range);
	if (this->_span.size() + fill > this->_size)
		throw SpanIsFullException();
    //std::cout << this->_span.size() << std::endl;
	for (unsigned int i = 0; i < this->_size; i++)
		this->addNumber(lower_range + rand() % fill);//generate random numbers from range lower to fill
}

void	Span::addNumberVec(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator i = begin; i < end; i++)
        this->addNumber(*i);
}

const char * Span::NotFoundException::what() const throw()
{
	return "No span found because not enough elements";
}

const char * Span::SpanIsFullException::what() const throw()
{
	return "Span is full";
}

void	Span::printOrdered(void)
{
	std::vector<int> temp = this->_span;
	std::sort(temp.begin(), temp.end());
	for (std::vector<int>::iterator i = temp.begin(); i != temp.end(); i++)
		std::cout << *i << " ";
	std::cout << std:: endl;
}