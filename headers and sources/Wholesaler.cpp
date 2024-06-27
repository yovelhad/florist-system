#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name), grower(grower)
{
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> v)
{
	std::cout << getName() << " forwards the request to " << grower->getName() << "." << std::endl;
	FlowersBouquet* fb = grower->prepareOrder(v);
	std::cout << grower->getName() << " returns flowers to " << getName() << "." << std::endl;
	return fb;
}

std::string Wholesaler::getName()
{
	return "Wholesaler " + Person::getName();
}
