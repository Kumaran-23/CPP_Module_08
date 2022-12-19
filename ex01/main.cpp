/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:29:41 by snair             #+#    #+#             */
/*   Updated: 2022/12/19 17:29:42 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		std::cout << "Test from PDF" << std::endl;
        std::cout << std::endl;
		Span	sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
        sp.printOrdered();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
    std::cout << std::endl;
	{
		std::cout << "Test 3 elements" << std::endl;
        std::cout << std::endl;
		Span	a = Span(3);
        try
        {
            a.addNumber(100);
            a.addNumber(201);
		    a.addNumber(300);
		    std::cout << a.shortestSpan() << std::endl;
		    std::cout << a.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
	}
    std::cout << std::endl;
    {
		std::cout << "Error Test" << std::endl;
        std::cout << std::endl;
        Span a = Span(1);
        try
        {
			a.addNumber(10);
            a.addNumber(21);
        }
        catch(const std::exception& e)
        {
			std::cerr << e.what() << std::endl;
        }
        Span b = Span(1);
		try
        {
            b.addNumber(100);
			b.shortestSpan();
			std::cout << a.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
			std::cerr << e.what() << std::endl;
        }
		try
        {
			b.longestSpan();
		    std::cout << a.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
			std::cerr << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
	{
		std::cout << "addNumberVec test" << std::endl;
        std::cout << std::endl;
		Span	a = Span(100);
        int	array[] = { 781, 15, 312, 636, 420, -92, 12, 681, 645, 65, 812, 542, 304, 832, 44, 485, 682, 646, 20, 667, 276, 328, 720, 550, 424, 236, 453, -98, 486, 652, 262, 687, -47, 241, 517, 496, 803, 743, -40, 484, 874, -100, 33, -33, 294, 973, 358, 281, 753, 890, 307, 497, -27, -63, 629, 206, 927, 134, 924, 947, 480, 976, 64, 309, 845, 385, 79, 655, 128, 988, 514, 479, 789, 990, 200, 985, 272, 828, 452, 261, 538, 343, 543, 2, 552, 188, 115, 4, 337, 315, 26, 752, 532, 586, 456, 626, 330, 174, 457, 409};
        int n = sizeof(array)/sizeof(array[0]);
        std::vector<int> vec(array, array + n);
        try
		{
			a.addNumberVec(vec.begin(), vec.end());
            a.printOrdered();
            std::cout << a.shortestSpan() << std::endl;
		    std::cout << a.longestSpan() << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
    std::cout << std::endl;
    {
		std::cout << "addnumber random test" << std::endl;
        std::cout << std::endl;
		Span	a = Span(1000);
        try
        {
            a.addNumberRandom(100, 900);
            a.printOrdered();
            std::cout << a.shortestSpan() << std::endl;
		    std::cout << a.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    std::cout << std::endl;
	{
		try
        {
            std::cout << "INT_MIN/INT_MAX Test" << std::endl;
            std::cout << std::endl;
		    Span	a = Span(4);
		    a.addNumber(-2);
		    a.addNumber(-1);
		    a.addNumber(2147483647);
		    a.addNumber(-2147483648);
            a.printOrdered();
		    std::cout << a.shortestSpan() << std::endl;
		    std::cout << a.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
	}
    return (0);
}