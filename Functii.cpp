#include "Header.h"
#include<iostream>

int *ADD(int a[6], int b[4]) {
	int *c;
	for (int i = 0; i < 5; i++) {
		c[i] = a[i] + b[i];
	}

	return c;
}

/*int adunare(int a, int b) {
	int f;

	f = a + b;
	return f;
}*/