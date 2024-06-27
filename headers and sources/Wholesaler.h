#pragma once
#include <string>
#include <vector>
#include "Person.h"
#include "Grower.h"


class Wholesaler : public Person
{
private:
	Grower* grower;
public:
	Wholesaler(std::string , Grower*);
	FlowersBouquet* acceptOrder(std::vector<std::string>);
	std::string getName();
};

