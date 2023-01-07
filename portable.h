#pragma once
#include <iostream>
#include "IProducts.h"
using namespace std;

class Portable : virtual public IProducts
{
public:
	Portable(string name, double weight);
	Portable(string name);
	void getName() override;
	string _name;
	double _weight;
};

class Laptop : virtual public Portable
{
public:
	Laptop(string name, double weight, double diagonal);
	void Show() override;
	double _diagonal;
};

class Powerbank : virtual public Portable
{
public:
	Powerbank(string name, double weight, int capacity);
	void Show() override;
	int _capacity;
};