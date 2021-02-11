#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap &ref);
	FragTrap(const std::string name);
	~FragTrap();
	FragTrap	&operator=(const FragTrap& ref);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif