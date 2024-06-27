#pragma once
#include <string>
#include <vector>
#include "Person.h"
#include "Gardener.h"


class Grower : public Person
{
private:
	Gardener* g;
public:
	Grower(std::string,Gardener*);
	FlowersBouquet* prepareOrder(std::vector<std::string>);
	std::string getName();

};

