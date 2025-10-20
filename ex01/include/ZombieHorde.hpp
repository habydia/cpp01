
#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <memory>
# include <string>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie(void);
	void setName(std::string newName);
	Zombie(std::string z_name);
	~Zombie(void);
	void announce(void);
};

Zombie	*zombieHorde(int N, std::string name);
void	randomChump(int N, std::string name);

#endif