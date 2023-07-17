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
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
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
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
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
			sp.printSpan();
			std::cout << "--- Add 6 to span. ---" << std::endl;
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
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test find shortestSpan in span with 1 number" << std::endl;
		try {
			Span sp = Span( 5 );
			sp.addNumber( 1 );
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
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
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test find longestSpan in span with 1 number" << std::endl;
		try {
			Span sp = Span( 5 );
			sp.addNumber( 1 );
			sp.printSpan();
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test add multiple numbers from other vector to span" << std::endl;
		try {
			Span sp = Span( 5 );
			std::vector<int> vec;
			vec.push_back( 1 );
			vec.push_back( 2 );
			vec.push_back( 3 );
			vec.push_back( 4 );
			vec.push_back( 5 );

			sp.addMultipleNumbers( vec.begin() + 1, vec.begin() + 4 );
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test add multiple numbers from other vector to span more than span size" << std::endl;
		try {
			Span sp = Span( 5 );
			std::vector<int> vec;
			vec.push_back( 1 );
			vec.push_back( 2 );
			vec.push_back( 3 );
			vec.push_back( 4 );
			vec.push_back( 5 );
			vec.push_back( 6 );

			sp.addMultipleNumbers( vec.begin() + 1, vec.end() );
			sp.printSpan();
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test add all numbers from other vector to span" << std::endl;
		try {
			Span sp = Span( 5 );
			std::vector<int> vec;
			vec.push_back( 1 );
			vec.push_back( 2 );
			vec.push_back( 3 );
			vec.push_back( 4 );
			vec.push_back( 5 );

			sp.addMultipleNumbers( vec );
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test add all numbers from other vector with more than span size to span" << std::endl;
		try {
			Span sp = Span( 5 );
			std::vector<int> vec;
			vec.push_back( 1 );
			vec.push_back( 2 );
			vec.push_back( 3 );
			vec.push_back( 4 );
			vec.push_back( 5 );
			vec.push_back( 6 );

			sp.addMultipleNumbers( vec );
			sp.printSpan();
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test add some numbers from other vector to span" << std::endl;
		try {
			Span sp = Span( 5 );
			std::vector<int> vec;
			vec.push_back( 1 );
			vec.push_back( 2 );
			vec.push_back( 3 );
			vec.push_back( 4 );
			vec.push_back( 5 );
			vec.push_back( 6 );
			vec.push_back( 7 );

			sp.addMultipleNumbers( vec.begin() + 1, vec.begin() + 5 );
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test add some numbers from other vector to span with more than span size" << std::endl;
		try {
			Span sp = Span( 5 );
			std::vector<int> vec;
			vec.push_back( 1 );
			vec.push_back( 2 );
			vec.push_back( 3 );
			vec.push_back( 4 );
			vec.push_back( 5 );
			vec.push_back( 6 );
			vec.push_back( 7 );

			sp.addMultipleNumbers( vec.begin() + 1, vec.end() );
			sp.printSpan();
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test add one numbers to whole span" << std::endl;
		try {
			Span sp = Span( 5 );

			sp.addMultipleNumbers( 42 );
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "======================" << std::endl;
	{
		std::cout << "Test add one numbers to whole span with some number inside" << std::endl;
		try {
			Span sp = Span( 5 );
			sp.addNumber( 1 );

			sp.addMultipleNumbers( 42 );
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
