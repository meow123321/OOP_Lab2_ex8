#include "Header.h"
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

	int *c;

	c = ADD({1, 2, 3, 4, 5 }, { 2,3,4 });
	for (int i = 0; i < 5; i++) {
		cout << c[i];
	}

	_getch();
	return 0;
}