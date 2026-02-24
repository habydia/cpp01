#include "HumanA.hpp"

// constructor
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << _name << " is created" << std::endl;
}

// destructor
HumanA::~HumanA()
{
	std::cout << _name << " is destroyed" << std::endl;

}

void HumanA::attack() const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

// const std::string &HumanA::getType(Weapon &weapon)
// {
// 	return (weapon.getType());
// }