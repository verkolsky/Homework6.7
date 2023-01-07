#pragma once
#include <iostream>
#include "portable.h"
#include "consumer.h"
using namespace std;

class PortCons : public Portable, public Consumer
{
public:
    PortCons(string name, double weight, int capacity);
    void getName() override;
    void Show() override;
    int _capacity;
};