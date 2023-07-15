#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "========== MutantStack ==========" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		std::cout << "push 5, top: " << mstack.top() << std::endl;
		mstack.push(17);
		std::cout << "push 17, top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "pop, top: " << mstack.top() << std::endl;
		std::cout << "MutantStack size:  " << mstack.size() << std::endl;
		mstack.push(3);
		std::cout << "push 3, top: " << mstack.top() << std::endl;
		mstack.push(5);
		std::cout << "push 5, top: " << mstack.top() << std::endl;
		mstack.push(737);
		std::cout << "push 737, top: " << mstack.top() << std::endl;
		//[...]
		mstack.push(0);
		std::cout << "push 0, top: " << mstack.top() << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "----- Testing iterator -----" << std::endl;
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl << "========== Array ==========" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		std::cout << "push_back 5, back: " << mstack.back() << std::endl;
		mstack.push_back(17);
		std::cout << "push_back 17, back: " <<mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "pop_back, back: " << mstack.back() << std::endl;
		std::cout << "List size: " << mstack.size() << std::endl;
		mstack.push_back(3);
		std::cout << "push_back 3, back: " << mstack.back() << std::endl;
		mstack.push_back(5);
		std::cout << "push_back 5, back: " << mstack.back() << std::endl;
		mstack.push_back(737);
		std::cout << "push_back 737, back: " << mstack.back() << std::endl;
		//[...]
		mstack.push_back(0);
		std::cout << "push_back 0, back: " << mstack.back() << std::endl;

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		std::cout << "----- Testing iterator -----" << std::endl;
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
	}
	return 0;
}