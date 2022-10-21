#include "Zombie.hpp"

int main(void)
{
	Zombie Def;
	Zombie Stack("StackZombie");
	Zombie *Heap = newZombie("HeapZombie");

	Def.announce();
	Stack.announce();
	Heap->announce();
	randomChump("RandomZombie");

	delete Heap;
	return (0);
}
