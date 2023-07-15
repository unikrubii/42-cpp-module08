#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main() {
	{
		std::cout << "Test from subject." << std::endl;
		try {
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test with 10000 numbers." << std::endl;
		try {
			srand( time( NULL ) );
			Span sp = Span( 10000 );
			for ( int i = 0; i < 10000; i++ )
				sp.addNumber( rand() % 20000 );
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test addNumber with more than size." << std::endl;
		try {
			Span sp = Span( 5 );
			sp.addNumber( 1 );
			sp.addNumber( 2 );
			sp.addNumber( 3 );
			sp.addNumber( 4 );
			sp.addNumber( 5 );
			sp.addNumber( 6 );
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test find shortestSpan with empty span" << std::endl;
		try {
			Span sp = Span( 5 );
			sp.shortestSpan();
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test find longestSpan with empty span" << std::endl;
		try {
			Span sp = Span( 5 );
			sp.longestSpan();
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
