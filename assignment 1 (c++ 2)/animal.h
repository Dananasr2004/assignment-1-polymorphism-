#ifndef Animal_H
#define Animal_H
#include <iostream>
using namespace  std;

class Animal {

private:
	int age;
	string name;

public:
	Animal(int, string);
	~Animal();
	virtual void print();  /*virtual method  using polymorphism to get the class type later when the print method is called
						   else eg. in fish (animal print) the method print() of animal is called*/

	virtual string getowner() = 0;  // pure virtual method makes animal abstract and any other class where this method is not called is also abstract

};

#endif