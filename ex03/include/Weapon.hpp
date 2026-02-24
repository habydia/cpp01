#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
class Weapon
{
  private:
	std::string _type;

  public:
	// constructor and destructor
	Weapon(std::string type);
	~Weapon();

	// getter
	const std::string &getType() const;
	// setter
	void setType(std::string newType);
};

#endif // WEAPON_HPP