
#include<iostream>
#include"cat.h"
using namespace std;


Cat::Cat(int a, string n, string c, int ps) : Animal(a, n) {
	cout << "Cat created" << endl;
	color = c;

	pawsize = ps;
}
Cat::~Cat() {
	cout << "Cat destroyed" << endl;
}

void Cat::print() {
	cout << "Cat print" << endl;
}
string Cat::getowner() { return "grace"; }
