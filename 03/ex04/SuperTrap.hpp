/*
**https://youtu.be/oqpx7L5ipbw
**
**				/	FragTrap	\
**	ClapTrap						SuperTrap
**				\	NinjaTrap	/
*/
#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(const SuperTrap &ref);
	SuperTrap(const std::string &name);
	~SuperTrap(void);
	SuperTrap &operator=(const SuperTrap &ref);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
};
#endif

