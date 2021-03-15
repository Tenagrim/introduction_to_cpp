#pragma once
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack();
	virtual ~MutantStack();
	MutantStack(const MutantStack &ref);
	typedef typename std::stack<T>::container_type::iterator iterator;
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
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return(this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return(this->c.end());
}