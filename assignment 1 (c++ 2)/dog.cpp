#include<iostream>
#include"Dog.h"
using namespace std;

Dog::Dog(int a, string n, string b) :Animal(a, n) {

	cout << "Dog created" << endl;
	breed = b;

}
Dog::~Dog() {

	cout << "Dog destroyed" << endl;
}

void Dog::print() {

	cout << "Dog print" << endl;

}
string Dog::getowner() { return "mark"; }