#pragma once
#include <iostream>
using namespace std;


class IProducts
{
public:
	virtual void Show() = 0;
	virtual void getName() = 0;
	virtual ~IProducts() = default;
};