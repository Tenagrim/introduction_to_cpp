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

void    Converter::assign(const Converter & ref)
{
	flags = ref.flags;
	double_value = ref.double_value;
	float_value = ref.float_value;
	char_value = ref. char_value;
	int_value = ref.int_value;
	input = ref.input;	
}
Converter::Converter(const Converter &ref) : flags(ref.flags),
int_value(ref.int_value), float_value(ref.float_value),
double_value(ref.double_value), char_value(ref.char_value), input(ref.input)
{}

std::string		Converter::to_string() const
{
	std::stringstream ss;
	ss << "char: ";
	if (flags & F_CHAR_IMP || !(flags & F_EMP_MAN))
		ss << "impossible\n";
	else if (!this->isDisplayable(char_value))
		ss << "Non displayable\n";
	else
		ss << "'" << char_value << "'\n";
	ss << "int: ";
	if (flags & F_INT_IMP)
		ss << "impossible\n";
	else
		ss << int_value << "\n";
	ss << "float: ";
	//std::cout << tmp.str() << "!!!!!!!!! "<< input <<"\n";
		//ss.setf(std::ios::fixed, std::ios::floatfield);
		//ss.setf(std::ios::showpoint);
	//ss << std::setprecision (8) << float_value;
	//ss << std::fixed << float_value;
	ss  << float_value;
	if (flags & F_EMP_MAN)
		ss << ".0";
	ss << "f\n";
	//ss << "double: "<< std::fixed << std::setprecision (0) << double_value;
	ss << "double: "<< double_value;
	if (flags & F_EMP_MAN)
		ss << ".0";
	ss << "\n";
	return ss.str();
}

std::ostream		&operator<<(std::ostream &os, const Converter &ref)
{
	os << ref.to_string();
	return (os);
}

Converter    &Converter::operator=(const Converter &ref)
{
	assign(ref);
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
	//std::cout << "CHAR\n";
	this->int_value = static_cast<int>(this->char_value);
	this->float_value = static_cast<float>(this->char_value);
	this->double_value = static_cast<double>(this->char_value);
}

void	Converter::fromFloat()
{
	//std::cout << "FLOAT\n";
	//this->double_value = static_cast<double>(this->float_value);
	if (flags & F_IS_LEXICAL || this->float_value < 0.0f || this->float_value > 127.0f)
		this->flags |= F_CHAR_IMP;
	else
		this->char_value = static_cast<char>(float_value);
	if (flags & F_IS_LEXICAL || float_value < std::numeric_limits<int>::min() ||
	float_value > std::numeric_limits<int>::max())
		this->flags |= F_INT_IMP;
	else
		this->int_value = static_cast<int>(float_value);
}

void	Converter::fromDouble()
{
	//std::cout << "DOUBLE\n";
	this->float_value = static_cast<float>(this->double_value);
	if (flags & F_IS_LEXICAL || this->double_value < 0.0f || this->double_value > 127.0f)
		this->flags |= F_CHAR_IMP;
	else
		this->char_value = static_cast<char>(float_value);
	if (flags & F_IS_LEXICAL || double_value < std::numeric_limits<int>::min() ||
	double_value > std::numeric_limits<int>::max())
		this->flags |= F_INT_IMP;
	else
		this->int_value = static_cast<int>(double_value);
}

void	Converter::fromInt()
{
	//std::cout << "INT\n";
	if (int_value < 0 || int_value > 127)
		flags |= F_CHAR_IMP;
	else
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
	else if (input == "-inf" || input == "+inf" || input == "nan" || input == "inf")
	{
		double_value = strtod(input.c_str(), NULL);
		flags |= F_IS_LEXICAL;
		flags |= F_IS_DOUBLE;
		flags |= F_CHAR_IMP;
		flags |= F_INT_IMP;
		return (F_IS_DOUBLE);
	}
	else if (input == "-inff" || input == "+inff" || input == "nanf" || input == "inff")
	{
		float_value = atof(input.c_str());
		flags |= F_IS_LEXICAL;
		flags |= F_IS_FLOAT;
		flags |= F_CHAR_IMP;
		flags |= F_INT_IMP;
		return (F_IS_FLOAT);
	}
	if (input[i] == '-' || input[i] == '+')
		i++;
	while (i < len)
	{
		if (input[i] == '.')
		{
			//std::cout << "!!!! " <<  (int)(flags & F_POINT) << "\n";
			if (this->flags & F_POINT)
				return(wrongInputRet());
			
			//std::cout << "!!!! " <<  (int)(flags & F_POINT) << "\n";
			this->flags |= F_POINT;
			i++;
		}
		if (input[i] == 'f')
		{
			if (i != len - 1)
				return(wrongInputRet());
			this->flags |= F_ENDS_F;
			break;
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
			double_value = strtod(input.c_str(), NULL);
			//std::cout << double_value << "<----------\n";
			float_value = static_cast<float>(double_value);
			//std::cout << float_value << "<---|------\n";
			//std::cout << "[" << float_value << "]\n";
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
	std::stringstream tmp;
	if(flags & F_IS_INT)
		fromInt();
	else if (flags & F_IS_CHAR)
		fromChar();
	else if (flags & F_IS_FLOAT)
		fromFloat();
	else if (flags & F_IS_DOUBLE)
		fromDouble();
	else
		throwWrongInput();

	//std::cout << "[" << (int)(flags & F_EMP_MAN) << "]\n";

	tmp << double_value;
	if (tmp.str().find('.') == std::string::npos)
		flags |= F_EMP_MAN;
	//std::cout << "[" << (int)(flags & F_EMP_MAN) << "]\n";
	return (0);
}