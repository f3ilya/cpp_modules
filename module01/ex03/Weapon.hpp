#ifndef CPP_WEAPON_H
#define CPP_WEAPON_H

#include <iostream>
#include <string>

class Weapon {
public:
	Weapon(std::string type);
	~Weapon();
	void setType(std::string type);
	std::string const &getType(void) const;

private:
	std::string _type;
};


#endif
