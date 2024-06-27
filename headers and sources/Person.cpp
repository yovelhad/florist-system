#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name)
{
}

void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> v) 
{
	std::string joined = FlowersBouquet::join(v,", ");
	std::cout << getName() << " order flowers to " << p->getName() << " from " << f->getName() << ": " << joined << std::endl;
	f->acceptOrder(p, v);
}

void Person::acceptFlowers(FlowersBouquet* fb)
{
	std::string st = fb->toString(); 
	std::cout << getName() << " accepts the flowers: " << st << std::endl;
	delete fb;
}

std::string Person::getName()
{
	return name;
}
