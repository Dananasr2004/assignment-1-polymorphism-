
#ifndef cat_H
#define cat_H
#include <iostream>
#include"animal.h"
using namespace  std;


class Cat : public Animal {

private:
	string color;
	int pawsize;

public:
	Cat(int, string, string, int);
	~Cat();
	virtual void print();         // using polymorphism to get the class type 
	virtual string getowner();     // insure Cat concrete
};

#endif