#include "animal.h"


int main() {

	Cat c1(
		"Max",
		5,
		"Gray",
		"Sphinx"
	);


	Dog d1(
		"Jerry",
		3,
		"Golden",
		"Spitz"
	);

	Parrot p1(
		"Tom",
		4,
		"Red",
		"Ara"
	);

	c1.print();
	d1.print();
	p1.print();

	return 0;
}