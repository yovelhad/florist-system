#include "Gardener.h"

Gardener::Gardener(std::string name) : Person(name){}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> v)
{
	FlowersBouquet* fb = new FlowersBouquet(v);
	std::cout << getName() << " prepares flowers." << std::endl;
	return fb;
}

std::string Gardener::getName()
{
	return "Gardener " + Person :: getName();
}
