#include"Enemy.hpp"
Enemy::Enemy()
{}

Enemy::~Enemy()
{}

Enemy::Enemy(const Enemy &ref)
{
	this->hit_points = ref.hit_points;
	this->type = ref.type;
}

Enemy::Enemy(int hp, const std::string &type)
{
	this->hit_points = hp;
	this->type = type;
}

Enemy	&Enemy::operator=(const Enemy &ref)
{
	this->type = ref.type;
	this->hit_points = ref.hit_points;
	return (*this);
}

std::string	Enemy::getType() const
{
	return (type);
}

int			Enemy::getHP() const
{
	return (hit_points);
}

void	Enemy::takeDamage(int amount)
{
	if (hit_points <= 0 || amount <= 0)
		return;
	hit_points -= amount;
	if (hit_points < 0)
		hit_points = 0;
}

std::ostream		&operator<<(std::ostream &os, const Enemy&ref)
{
	os << ref.getType() << " has " << ref.getHP() << " HP\n";
	return(os);
}
