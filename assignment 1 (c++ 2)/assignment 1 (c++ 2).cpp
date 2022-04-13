#include<iostream>
#include "animal.h"
#include"Dog.h"
#include"cat.h"
#include"Fish.h"
using namespace std;


void printanimal(Animal* animal1) {

	animal1->print();

}

int main()
{
	// testing constructors and destructors
	Dog d(4, "Max", "cholo");
	Cat c(3, "bell", "gray", 6);
	Fish f(2, "golden", 3, 1);

	// testing virtual methods(polymorphism)
	Animal* arrayanimal[3];    // pointer not object from animal since animal is abstract

	arrayanimal[0] = &d;
	arrayanimal[1] = &c;
	arrayanimal[2] = &f;

	for (int i = 0; i < 3; i++) {          // filling the array
		printanimal(arrayanimal[i]);

	}

	// pure virtual methods testing the output
	cout << "The dog owner is " << d.getowner() << endl;
	cout << "The cat owner is " << c.getowner() << endl;
	cout << "The fish owner is " << f.getowner() << endl;
}
