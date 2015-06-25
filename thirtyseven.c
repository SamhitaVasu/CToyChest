#include <stdio.h>

void call_by_value(int x) {
	printf("Inside call_by_value x = %d before adding 10.\n", x);
	x += 10;
	printf("Inside call_by_value x = %d after adding 10.\n", x);
}

void call_by_reference(int *y) {
	printf("Inside call_by_reference y = %d before adding 10.\n", *y);
	(*y) += 10;
	printf("Inside call_by_reference y = %d after adding 10.\n", *y);
}

int main() {
	int b=10;
	int a=10;
	
	printf("a = %d before function call_by_value.\n", a);
	call_by_value(a);
	printf("a = %d after function call_by_value.\n", a);
	printf("b = %d before function call_by_reference.\n", b);
	call_by_reference(&b);
	printf("b = %d after function call_by_reference.\n", b);
	
	return 0;
}

//This program shows the difference between call by value and call by reference
