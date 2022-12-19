/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:28:11 by snair             #+#    #+#             */
/*   Updated: 2022/12/19 17:28:12 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
        std::cout << "PDF test" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << std::endl;
    {
        std::cout << "Vector test" << std::endl;
        std::cout << std::endl;
        std::vector<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);
        std::vector<int>::iterator it = mstack.begin();
        std::vector<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int, std::vector<int> > s(mstack);
    }
    std::cout << std::endl;
    {
        std::cout << "char cbegin and cend test" << std::endl;
        std::cout << std::endl;
        MutantStack<std::string> mstack;
        mstack.push("hello");
        mstack.push("everyone");
        mstack.push("hope");
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        mstack.push("your");
        mstack.push("good");
        MutantStack<std::string>::iterator cit = mstack.begin();
        MutantStack<std::string>::iterator cite = mstack.end();
        ++cit;
        --cit;
        while (cit != cite)
        {
            std::cout << *cit << std::endl;
            ++cit;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "char cbegin and cend test" << std::endl;
        std::cout << std::endl;
        MutantStack<int> mstack;
        mstack.push(1);
        mstack.push(2);
        mstack.push(3);
        mstack.push(4);
        mstack.push(5);
        MutantStack<int>::reverse_iterator rit = mstack.rbegin();
        MutantStack<int>::reverse_iterator rite = mstack.rend();
        ++rit;
        --rit;
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
    }
    {
        std::cout << "list reverse test" << std::endl;
        std::cout << std::endl;
        std::list<int> mstack;
        mstack.push_back(1);
        mstack.push_back(2);
        mstack.push_back(3);
        mstack.push_back(4);
        mstack.push_back(5);
        std::list<int>::reverse_iterator rit = mstack.rbegin();
        std::list<int>::reverse_iterator rite = mstack.rend();
        ++rit;
        --rit;
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
    }
    return 0;
}
