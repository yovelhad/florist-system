#pragma once
#include <iostream>
#include <vector>
#include "FlowersBouquet.h"
class Florist;

class Person
{
private:
	std::string name;

public:
	Person(std::string name);
	void orderFlowers(Florist*, Person*, std::vector<std::string>);
	void acceptFlowers(FlowersBouquet*);		
	virtual std::string getName();
};

