#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl H;

	if (argc != 2)
	{
		std::cout << "Wrong count of program arguments!" << std::endl;
		return 1;
	}
	H.complain(argv[1]);
	return 0;
}
