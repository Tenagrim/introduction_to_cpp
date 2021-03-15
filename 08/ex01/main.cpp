#include "span.hpp"
#include <iostream>

void	disp(Span &sp)
{
	sp.display();
	try
	{
		std::cout << "shortest: " <<sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "longest:  " <<sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	add(Span &sp, int n)
{
	try
	{
		sp.addNumber(n);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	given_testcase()
{
	std::cout << "main from subject =================================\n";
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	disp(sp);
	std::cout << "\n";
}

void	two_elms()
{
	std::cout << "two elements =================================\n";
	Span sp = Span(2);
	sp.addNumber(5);
	sp.addNumber(3);
	disp(sp);
	std::cout << "\n";

}

void	one_elm()
{
	std::cout << "one element =================================\n";
	Span sp = Span(1);
	sp.addNumber(5);
	disp(sp);
	std::cout << "\n";
}

void	overload()
{
	std::cout << "overload =================================\n";
	Span sp = Span(4);
	//sp.addNumber(5);
	add(sp, rand() % 10);
	add(sp, rand() % 10);
	add(sp, rand() % 10);
	add(sp, rand() % 10);
	add(sp, rand() % 10);
	add(sp, rand() % 10);
	add(sp, rand() % 10);
	disp(sp);
	std::cout << "\n";
}

void	add_range()
{
	std::cout << "add range =================================\n";
	Span sp = Span(4);
	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);
	sp.addNumber(1);
	sp.addRange(vect);
	disp(sp);
	std::cout << "\n";
}

void	add_range_overload()
{
	std::cout << "add range overload =================================\n";
	Span sp = Span(4);
	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);
	sp.addNumber(1);
	sp.addNumber(3);
	try
	{
		sp.addRange(vect);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	disp(sp);
	std::cout << "\n";
}

void	big_span()
{
	std::cout << "big span =================================\n";
	Span sp = Span(10000);
	for (int i = 0; i < 10000; i++)
		sp.addNumber(rand() % 100000);
	//disp(sp);
	std::cout << "size: " << sp.size() << "\n";
	std::cout << "shortest: " <<sp.shortestSpan() << std::endl;
	std::cout << "longest:  " <<sp.longestSpan() << std::endl;
	std::cout << "\n";
}

void	zero_size()
{
	std::cout << "zero size =================================\n";
	Span sp = Span(0);
	add(sp, 10);
	disp(sp);
	std::cout << "\n";
}

int main(void)
{
	given_testcase();
	two_elms();
	one_elm();
	overload();
	add_range();
	add_range_overload();
	big_span();
	zero_size();
}