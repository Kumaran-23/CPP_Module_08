/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:29:32 by snair             #+#    #+#             */
/*   Updated: 2022/12/19 17:29:33 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    int a[10] = { 11, 45, 6, 79, 36, 7, 4, 4, 52, 0};
	int	arr[7] = {-74, 72, 32, 2000, -69};
	
    std::vector<int> arrvector(a, a + 10);
    std::deque<int> arrdeque(a, a + 10);
    std::list<int> arrlist(a, a + 10);
	std::vector<int> vec2(arr, arr + 5);

    try
	{
		easyfind(arrvector, 79);
    	easyfind(arrdeque, 4);
    	easyfind(arrlist, 45);
		easyfind(arrvector, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;
    std::cout << "vec2 tests" << std::endl;
	try
	{
		easyfind(vec2, -69);
        easyfind(vec2, -74);
        easyfind(vec2, 2000);
        easyfind(vec2, -70);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}