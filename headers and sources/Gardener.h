#pragma once
#include <string>
#include <vector>
#include "Person.h"
class Gardener : public Person
{
public:
	Gardener(std::string);
	FlowersBouquet* prepareBouquet(std::vector<std::string>);
	std::string getName();
};

