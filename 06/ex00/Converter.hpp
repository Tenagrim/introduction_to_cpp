#pragma once
#include <string>
#include <iostream>
#include <sstream>
#define F_POINT 1
#define F_ENDS_F 2
#define	F_IS_CHAR 4
#define	F_IS_FLOAT 8
#define	F_IS_DOUBLE 16
#define F_IS_INT 32
#define F_IS_LEXICAL 64
#define F_WRONG_INPUT 128
#define F_CHAR_IMP 256
#define F_CHAR_ND 512
#define F_INT_IMP 1024


class Converter
{
private:
    class InvalidInputException : public std::runtime_error
	{
		public:
		InvalidInputException(std::string const &msg) : std::runtime_error(msg){}
	};
    void    throwWrongInput() const;
    int     flags;
    int     num_chars;
    int     not_num_chars;
    int     int_value;
    float   float_value;
    double  double_value;
    char    char_value;
    std::string input;
    std::string char_repr;
    std::string int_repr;
    std::string float_repr;
    std::string double_repr;
    Converter();
    int     wrongInputRet();
    void    fromChar();
    void    fromInt();
    void    fromFloat();
    void    fromDouble();
public:
    Converter(const std::string &input);
    ~Converter();
    Converter(const Converter &ref);
    Converter   &operator=(const Converter &ref);
    int         parse_input(const std::string &input);
	static bool	isDisplayable(char c);
    int         convert();
    std::string to_string() const;
};

std::ostream		&operator<<(std::ostream &os, const Converter &ref);