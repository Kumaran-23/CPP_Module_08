#include "easyfind.hpp"

int main(void)
{
	/*int						array1[7] = {1, 2, 3, 42, 69};
	std::vector<int>		intVector1(array1, array1 + 5);
	int 					toFind; 

	if (ac != 2)
	{
		std::cout << "./easyfind [ToFind]" << std::endl;
		return (0);
	}
	toFind = atoi(av[1]);
	std::vector<int>::iterator number1 = easyfind(intVector1, toFind);*/
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    std::array<int , 10> myarray = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    std::vector<int> myvector(a, a + 10);
    std::deque<int> mydeque(a, a + 10);
    std::list<int> mylist(a, a + 10);

    easyfind(myarray, 1);
    easyfind(myvector, 5);
    easyfind(myvector, 8);
    easyfind(mydeque, 9);
    easyfind(mylist, 0);

    easyfind(myarray, 100);
    easyfind(myvector, 100);
    easyfind(myvector, 100);
    easyfind(mydeque, 100);
    easyfind(mylist, 100);

    return (0);
}