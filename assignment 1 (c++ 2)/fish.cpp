#include<iostream>
#include"Fish.h"
using namespace std;

Fish::Fish(int a, string n, int gc, int ss) :Animal(a, n) {
	cout << "Fish created" << endl;
	gillcapacity = gc;

	swimspeed = ss;

}


Fish::~Fish()
{
	cout << "Fish destroyed" << endl;

}

string Fish::getowner() { return "hala"; }