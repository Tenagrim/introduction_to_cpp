#include"Character.hpp"

Character::Character()
{}

Character::~Character()
{}

Character::Character(const std::string &name)
{
	this->action_points = 40;
	this->max_action_points = 40;
	this->name = name;
	this->weapon = NULL;
}

Character::Character(const Character &ref)
{
	this->name = ref.name;
	this->action_points = ref.action_points;
	this->weapon = ref.weapon; //  <- ????   FIXME
}

Character	&Character::operator=(const Character &ref)
{
	this->name = ref.name;
	this->action_points = ref.action_points;
	this->weapon = ref.weapon; //  <- ????   FIXME
	return (*this);
}

void		Character::recoverAP()
{
	if (action_points == max_action_points)
		return;
	action_points += 10;
	action_points = (action_points > max_action_points) ? max_action_points : action_points;
}

bool Character::isArmed() const
{
	return (weapon)? true : false;
}

std::string	Character::getName() const
{
	return (name);
}

int			Character::getAP() const
{
	return (action_points);
}

const AWeapon	*Character::getWeapon() const
{
	return (weapon);
}

void		Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (!weapon)
	{
		std::cout << name << " is unarmwd. Unable to attack.\n";
		return;
	}
	if (action_points < weapon->getAPCost())
	{
		std::cout << "Not enough action points\n";
		return;
	}
	action_points -= weapon->getAPCost();
	if (action_points < 0)
		action_points = 0;
	enemy->takeDamage(weapon->getDamage());
	std::cout << name <<" attacks " << enemy->getType() << " with " <<
	weapon->getName() << "\n";
	weapon->attack();
	if (enemy->getHP() <= 0)
	{
		std::cout << enemy->getType() << " was killed by " << name << " with " << weapon->getName() << "\n";
		delete enemy;
	}
}

std::ostream		&operator<<(std::ostream &os, const Character &ref)
{
	os << ref.getName() << " has " << ref.getAP() << " AP" ;
	if (ref.getWeapon())
		os << " and wields a " << ref.getWeapon()->getName() << "\n";
	else
		os << " and is unarmed\n";
	return(os);
}