#pragma once
#include <iostream>
#include "IProducts.h"
using namespace std;

class Consumer : virtual public IProducts
{
public:
	Consumer(string name, double weight);
	Consumer(double weight);
	void getName() override;
	string _name;
	double _weight;
};

class TV : virtual public Consumer
{
public:
	TV(string name, double weight, double diagonal);
	void Show() override;
	double _diagonal;
};

class Washer : virtual public Consumer
{
public:
	Washer(string name, double weight, double capacity);
	void Show() override;
	double _capacity;
};