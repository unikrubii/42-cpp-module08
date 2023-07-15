#include <vector>
#include "easyfind.hpp"

int main ( void ) {
	{
		std::vector<int> v;
		v.push_back( 1 );
		v.push_back( 2 );
		v.push_back( 3 );
		v.push_back( 4 );
		v.push_back( 5 );
		std::cout << "Vector: { ";
		for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
			std::cout << *it << ", ";
		std::cout << "}" << std::endl;
		std::cout << "find(3): " << *easyfind(v, 3) << std::endl;
	}
	std::cout << "====================" << std::endl;
	{
		std::vector<int> v;
		v.push_back( 1 );
		v.push_back( 2 );
		v.push_back( 3 );
		v.push_back( 2 );
		v.push_back( 3 );
		std::cout << "Vector: { ";
		for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
			std::cout << *it << ", ";
		std::cout << "}" << std::endl;
		std::cout << "find(2): " << *easyfind(v, 2) << std::endl;
	}
	std::cout << "====================" << std::endl;
	{
		int	arr[] = { 1, 2, 3, 4, 5 };
		std::cout << "Array: { ";
		for (int i = 0; i < 5; i++)
			std::cout << arr[i] << ", ";
		std::cout << "}" << std::endl;
		try {
			std::cout << "find(4): " << *easyfind(arr, 4) << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
}
