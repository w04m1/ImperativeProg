#include <stdio.h>

// Write a function that returns the sum of the elements in
// an array received as a parameter.
// The array is passed using a pointer
// to the first element and an integer variable containing a length.
// Let's write the function without using the operator[],
// using pointer arithmetic.
// Is it possible to find the size of the array inside
// the function without the variable containing the length?
int sumEl(int *fst, int l)
{
	int sum = 0;
	for (int i = 0; i < l; i++)
	{
		sum += *fst;
		fst += 1;
	}
	return sum;
}

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res = sumEl(&arr[0], 10);
	printf("%d", res);
	return 0;
}
