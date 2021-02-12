#pragma once
#include "Victim.hpp"
class Orc : public Victim
{
private:
	Orc();
public:
	virtual ~Orc();
	Orc(const std::string &name);
	Orc(const Orc &ref);
	Orc &operator=(const Orc &ref); 
	void		getPolymorphed() const;
};

