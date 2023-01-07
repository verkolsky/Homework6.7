#include <iostream>
#include "portable.h"
using namespace std;

Portable::Portable(string name, double weight) : _name(name), _weight(weight)
{
};

Portable::Portable(string name) : _name(name)
{
};

void Portable::getName()
{
	cout << _name << endl;
};

Laptop::Laptop(string name, double weight, double diagonal) : Portable(name, weight), _diagonal(diagonal)
{
};

void Laptop::Show()
{
	cout << _name << " weight is " << _weight << " kg." << endl;
	cout << _name << " diagonal is " << _diagonal << " inches" << endl;
};

Powerbank::Powerbank(string name, double weight, int capacity) : Portable(name, weight), _capacity(capacity)
{
};

void Powerbank::Show()
{
	cout << _name << " weight is " << _weight << " kg" << endl;
	cout << _name << " capacity is " << _capacity << " mAh" << endl;
};
