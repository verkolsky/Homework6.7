#include <iostream>
#include "portcons.h"
using namespace std;

PortCons::PortCons(string name, double weight, int capacity) : Portable(name), Consumer(weight), _capacity(capacity)
{
};

void PortCons::getName()
{
	cout << Portable::_name << endl;
};

void PortCons::Show()
{
	cout << Portable::_name << " weight is " << Consumer::_weight << " and has " << _capacity << " mAh battery." << endl;
};


