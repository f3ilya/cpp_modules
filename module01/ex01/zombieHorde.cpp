#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N > INT_MAX || N <= 0)
	{
		std::cout << "error!" << std::endl;
		return (nullptr);
	}
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
