#include <iostream>
#include "polygon.h"
using namespace std;

double getarea(const polygon &p) {
	return p.getarea();
}

int main(int argc, char **argv) {
	cout << getarea(square(5.0)) << endl
		<< getarea(triangle(3.0, 4.0, 5.0)) << endl;
	return 0;
}
