#ifndef PEON_CPP
#define PEON_CPP
#include "Victim.hpp"
class Peon : public Victim
{
private:
	Peon();
public:
	~Peon();
	Peon(const Peon &ref);
	Peon(const std::string &name);
	Peon		&operator=(const Peon &ref); 
	void		getPolymorphed() const;
};
#endif