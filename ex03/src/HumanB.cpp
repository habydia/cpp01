#include "HumanB.hpp"

// constructor
HumanB::HumanB(std::string name) : _name(name)
{
	// this->_weapon = nullptr; // Initialize weapon pointer to nullptr
	std::cout << _name << " is created" << std::endl;
}

// destructor
HumanB::~HumanB()
{
	std::cout << _name << " is destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon; // Store the address of the weapon
}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack with!" << std::endl;
}