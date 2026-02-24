#include "Weapon.hpp"

// constructor
Weapon::Weapon(std::string type)
{
	this->_type = type;
}

// destructor
Weapon::~Weapon()
{
}

// getType implementation
const std::string &Weapon::getType() const
{
	return (_type);
}

// setType implementation
void Weapon::setType(std::string newType)
{
	_type = newType;
}

// fonction qui change le type de l'arme selon humanA, humanB