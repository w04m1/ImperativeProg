#include <stdio.h>

// Change the value of a variable via a pointer.

int main()
{
	int a = 10;
	int *b = &a;
	printf("%d\n", a);
	b = *b + 1;
	printf("%d\n", b);
}
