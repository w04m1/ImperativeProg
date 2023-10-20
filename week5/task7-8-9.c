#include <stdio.h>

*returnLocalVarPointer()
{
	int a = 10;
	int *b = &a;
	return b;
}

int main()
{
	// task 7
	// we get 0xa, which is still our value but in HEXadecimal
	int *b = returnLocalVarPointer();
	printf("%p\n", b);

	// task 8
	// we get some value, but dereferencing null pointer is forbidden
	int *nul;
	printf("%p", *nul);

	// task 9
	int input;
	// we use pointer with scanf because it accepts
	// the address of a variable to directly modify it
	scanf("%d", &input);
	printf("%d", input);

	return 0;
}
