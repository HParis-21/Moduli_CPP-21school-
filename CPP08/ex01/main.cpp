#include "span.hpp"

int main()
{
		Span sp(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	try {
		Span sp(7);
		sp.addNumber(100);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span sp(6);
		std::vector<int> tmp;
		tmp.push_back(-5);
		tmp.push_back(-3);
		tmp.push_back(17);
		tmp.push_back(49);
		tmp.push_back(10);
		sp.addNumber(tmp, 5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}

	Span sp_ten = Span(10000);
	sp_ten.addNumber(0);
	for (int i = 0; i < 9999; i++)
		sp_ten.addNumber(60 + rand() % 2000000);
	std::cout << sp_ten.shortestSpan() << std::endl;
	std::cout << sp_ten.longestSpan() << std::endl;
	return (0);
}
