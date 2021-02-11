#ifndef NINJATRAP_CPP
#define NINJATRAP_CPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class NinjaTrap : public virtual ClapTrap
{
private:
public:
	NinjaTrap();
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &ref);
	~NinjaTrap();
	NinjaTrap	&operator=(const NinjaTrap&ref);
	void		ninjaShoebox(ClapTrap &target);
	void		ninjaShoebox(ScavTrap &target);
	void		ninjaShoebox(FragTrap &target);
	void		ninjaShoebox(NinjaTrap &target);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
};
#endif