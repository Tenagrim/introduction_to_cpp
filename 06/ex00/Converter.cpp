#include"Converter.hpp"

Converter::Converter()
{}

Converter::Converter(const std::string &input)
{
	flags = 0;
	this->input = input;
    if (parse_input(input) == -1 || (flags & F_WRONG_INPUT))
		throwWrongInput();
	convert();
}

void Converter::throwWrongInput() const
{
	std::stringstream ss;
	ss << "Input: " << input << " is wrong";
		throw (InvalidInputException(ss.str()));
}
Converter::~Converter()
{}

Converter::Converter(const Converter &ref)
{}

std::string		Converter::to_string() const
{
	std::stringstream ss;
	
	ss << "char: " << char_repr << "\n";
	ss << "int: " << int_repr << "\n";
	ss << "float: " << float_repr << "\n";
	ss << "double: " << double_repr << "\n";
}

std::ostream		&operator<<(std::ostream &os, const Converter &ref)
{
	os << ref.to_string();
	return (os);
}

Converter    &Converter::operator=(const Converter &ref)
{
    return (*this);
}

int     Converter::wrongInputRet()
{
	this->flags |= F_WRONG_INPUT;
	return (-1);
}

bool		Converter::isDisplayable(char c)
{
	if (c >= ' ' && c <= '~')
		return (true);
	else
		return (false);
}

void	Converter::fromChar()
{
	this->int_value = static_cast<int>(this->char_value);
	this->float_value = static_cast<float>(this->char_value);
	this->double_value = static_cast<double>(this->char_value);
}

void	Converter::fromFloat()
{
	
}

void	Converter::fromDouble()
{
	
}

void	Converter::fromInt()
{
	this->char_value = static_cast<char>(this->int_value);
	this->float_value = static_cast<float>(this->int_value);
	this->double_value = static_cast<double>(this->int_value);
}

int         Converter::parse_input(const std::string &input)
{
	int len = input.size();
	int i = 0;
	if (len == 1 && !isdigit(input[0]))
	{
		char_value = input[0];
		flags |= F_IS_CHAR;
		return (F_IS_CHAR);
	}
	else if (input == "-inf" || input == "+inf" || input == "nan")
	{
		float_value = atof(input.c_str());
		flags |= F_IS_LEXICAL;
		flags |= F_IS_DOUBLE;
		return (F_IS_DOUBLE);
	}
	else if (input == "-inff" || input == "+inff" || input == "nanf")
	{
		float_value = atof(input.c_str());
		flags |= F_IS_LEXICAL;
		flags |= F_IS_FLOAT;
		return (F_IS_FLOAT);
	}
	if (input[i] == '-' || input[i] == '+')
		i++;
	while (i < len)
	{
		if (input[i] == '.')
		{
			if (this->flags & F_POINT)
				return(wrongInputRet());
			this->flags |= F_POINT;
		}
		if (input[i] == 'f')
		{
			if (i != len - 1)
				return(wrongInputRet());
			this->flags |= F_ENDS_F;
		}
		if (input[i] < '0' || input[i] > '9')
				return(wrongInputRet());
		i++;
	}
	if (flags & F_POINT)
	{
		if (flags & F_ENDS_F)
		{
			flags |= F_IS_FLOAT;
			float_value = atof(input.c_str());
		}
		else
		{
			flags |= F_IS_DOUBLE;
			double_value = strtod(input.c_str(), NULL);
		}
	}
	else
	{
		flags |= F_IS_INT;
		int_value = atoi(input.c_str());
	}
	return (0);
}

int		Converter::convert()
{

}