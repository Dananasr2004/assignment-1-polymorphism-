#ifndef Dog_H
#define Dog_H
#include <iostream>
#include"animal.h"
using namespace  std;

class Dog : public Animal {

private:
	string breed;

public:
	Dog(int, string, string);
	~Dog();
	virtual void print();                // using polymorphism to get the class type 
	virtual string getowner();          // insure Dog concrete

};
#endif 