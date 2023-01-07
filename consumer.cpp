#include <iostream>
#include "consumer.h"
using namespace std;

Consumer::Consumer(string name, double weight) : _name(name), _weight(weight)
{
};

Consumer::Consumer(double weight) : _weight(weight)
{
};

void Consumer::getName()
{
	cout << _name << endl;
};

TV::TV(string name, double weight, double diagonal) : Consumer(name, weight), _diagonal(diagonal)
{
};

void TV::Show()
{
	cout << _name << " weight is " << _weight << " kg" << endl;
	cout << _name << " diagonal is " << _diagonal << " inches" << endl;
};

Washer::Washer(string name, double weight, double capacity) : Consumer(name, weight), _capacity(capacity)
{
};

void Washer::Show()
{
	cout << _name << " weight is " << _weight << " kg" << endl;
	cout << _name << " capacity is " << _capacity << " kg" << endl;
};
