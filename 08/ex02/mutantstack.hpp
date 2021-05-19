#pragma once
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack &ref);
	typedef typename std::stack<T>::container_type::reverse_iterator iterator;
	using	std::stack<T>::operator=;
	iterator	begin();
	iterator	end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &ref) : std::stack<T>(ref)
{}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::begin()
{
	return(this->c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::end()
{
	return(this->c.rend());
}
