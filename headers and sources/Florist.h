#pragma once
#include "Person.h"
#include "Wholesaler.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"

class Florist : public Person
{
private:
	Wholesaler* w;
	DeliveryPerson* dp;
	FlowerArranger* fa;

public:
	Florist(std::string, Wholesaler*, DeliveryPerson*, FlowerArranger*);
	void acceptOrder(Person*, std::vector<std::string>);
	std::string getName();
};

