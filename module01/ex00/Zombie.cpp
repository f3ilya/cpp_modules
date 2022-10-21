#include "Zombie.hpp"

Zombie::Zombie() : name("DefZombie") {}

Zombie::Zombie(std::string new_name) : name(new_name) {}

Zombie::~Zombie()
{
	std::cout << name << " died!" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
