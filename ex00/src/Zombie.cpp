#include "Zombie.hpp"

// constructor
Zombie::Zombie(std::string z_name) : name(z_name)
{
	std::cout << name << " is created" << std::endl;
}
// destructor
Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
