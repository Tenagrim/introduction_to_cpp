template <typename T>
Array<T>::Array()
{
	_size = 0;
	content = 0;
}

template <typename T>
Array<T>::Array(unsigned int new_size)
{
	if (new_size)
	{
		_size = new_size;
		content = new T[new_size]();
	}
	else
	{
		_size = 0;
		content = 0;
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] content;
}

template <typename T>
void	Array<T>::copy(Array<T> const &ref)
{
	if(content)
		delete[] content;
	this->_size = ref._size;
	if (_size)
	{
		content = new T[_size];
		for(unsigned int i = 0; i < _size; i++)
			content[i] = ref.content[i];
	}
	else
		content = 0;
}

template <typename T>
Array<T>::Array(const Array<T> &ref)
{
	content = 0;
	copy(ref);
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &ref)
{
	copy(ref);
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](const unsigned int index)
{
	if (index >= _size)
		throw(std::out_of_range("Index is out of range"));
	return(content[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return(_size);
}