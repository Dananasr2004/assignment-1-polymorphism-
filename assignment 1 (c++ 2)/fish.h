#ifndef Fish_H
#define Fish_H
#include <iostream>
#include"animal.h"
using namespace  std;
class Fish : public Animal {
public:
	int gillcapacity;
	int swimspeed;
public:
	Fish(int, string, int, int);
	~Fish();
	virtual string getowner();          // insure Fish concrete
};
#endif 
