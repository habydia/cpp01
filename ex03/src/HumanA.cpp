#include "HumanA.hpp"

// constructor
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(&weapon)
{
	this->weapon = &weapon;
}

// destructor
HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
