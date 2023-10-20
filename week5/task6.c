#include <stdio.h>

// Redesign the previous program to calculate an average.
// How can we calculate the size of the array from the pair of pointers?
int getArrLen(int *fst, int *lst)
{
	int len = 0;
	while (fst <= lst)
	// if it goes out of list by one - we get huge result
	// if it goes more - we get negative
	{
		len++;
		fst += 1;
	}

	return len;
}

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res = getArrLen(&arr[0], &arr[9]);
	printf("%d\n", res);
	return 0;
}