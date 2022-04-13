
#include<iostream>
#include "animal.h"

using namespace std;


Animal::Animal(int a, string n) {

	cout << "Animal created" << endl;

	age = a;
	name = n;
}

Animal::~Animal() {

	cout << "Animal destroyed" << endl;
}
void Animal::print() {
	cout << "animal print" << endl;
}
