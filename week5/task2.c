#include <stdio.h>

// Change the value of a pointer through a pointer to a pointer.
// Then change the value pointed by the pointed pointer as well!

int main()
{
	int a = 0;
	int *b = &a;
	int *c = &b;

	printf("%d", a);

	c = &*&c + 1;

	printf("%d", a);

	return 0;
}
