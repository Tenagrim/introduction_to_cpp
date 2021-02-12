#pragma once
#include <string>
#include <iostream>
class Victim
{
protected:
	std::string name;
	Victim();

public:
	~Victim();
	Victim(const Victim &ref);
	Victim(const std::string &name);
	Victim				&operator=(const Victim &ref);
	std::string			getName() const;
	virtual void		getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Victim &ref);