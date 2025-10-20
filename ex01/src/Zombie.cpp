#include "ZombieHorde.hpp"

Zombie::Zombie(std::string z_name) : name(z_name)
{
	std::cout << name << " is created" << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed" << std::endl;
}

// default constructor
Zombie::Zombie() : name("")
{
	std::cout << "Unnamed zombie is created" << std::endl;
}