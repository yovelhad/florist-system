// hw2New.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Person.h"
#include <iostream>
#include "Gardener.h"
#include "Grower.h"
#include "Wholesaler.h"
#include "DeliveryPerson.h"
#include "Florist.h"

int main()
{

    Person* p1 = new Person("Chris");
    Person* p2 = new Person("Robin");
    std::vector<std::string> s1 = {"Roses","Violets","Gladiolus"};
    Gardener* g1 = new Gardener("Garret");
    Grower* gw1 = new Grower("Gray", g1);
    Wholesaler* wh = new Wholesaler("Watson", gw1);
    DeliveryPerson* dp = new DeliveryPerson("Dylan");
    FlowerArranger* fa = new FlowerArranger("Flora");
    Florist* f1 = new Florist("Fred",wh,dp,fa);
    p1->orderFlowers(f1, p2, s1);

    delete p1;
    delete p2;
    delete f1;
    delete g1;
    delete gw1;
    delete wh;
    delete dp;
    delete fa;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
