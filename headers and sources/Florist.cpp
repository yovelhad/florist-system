#include "Florist.h"

Florist::Florist(std::string name,Wholesaler* w, DeliveryPerson* dp, FlowerArranger* fa) : Person(name),w(w),dp(dp),fa(fa)
{
}


void Florist::acceptOrder(Person* p, std::vector<std::string> v)
{
    std::cout << getName() << " forwards the request to " << w->getName() << "." << std::endl;
    FlowersBouquet* fb = w->acceptOrder(v);
    std::cout << w->getName() << " returns flowers to " << getName() << "." << std::endl;
    std::cout << getName() << " request flowers arrangement from " << fa->getName() << "." << std::endl;
    fa->arrangeFlowers(fb);
    std::cout << fa->getName() << " returns arranged flowers to " << getName() << "." << std::endl;
    std::cout << getName() << " forwards flowers to " << dp->getName() << "." << std::endl;
    dp->deliver(p,fb);
}

std::string Florist::getName()
{
    return "Florist " + Person::getName() ;
}
