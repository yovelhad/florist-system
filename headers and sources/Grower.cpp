#include "Grower.h"

Grower::Grower(std::string name , Gardener* g) : Person(name), g(g)
{
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> v )
{
	std::cout << getName() << " forwads the request to " << g->getName() << "." << std::endl;
	FlowersBouquet* fb = g->prepareBouquet(v);
	std::cout << g->getName() << " returns flowers to " << getName() << "." << std::endl;
	return fb;
}

std::string Grower::getName()
{
	return "Grower " + Person::getName() ;
}
