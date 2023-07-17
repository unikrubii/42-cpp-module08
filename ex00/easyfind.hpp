#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>
# include <iostream>

// Exceptions
class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Value not found";
		}
};

// Function template
template<typename T>
typename T::iterator easyfind( T &container, int value )
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NotFoundException();
	return it;
}

#endif