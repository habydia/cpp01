#include "HumanB.hpp"

// constructor
HumanB::HumanB(std::string name) : name(name)
{
}

// destructor
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon; // Store the address of the weapon
}

void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}