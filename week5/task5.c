#include <stdio.h>

// Redesign the previous function so that we
// get the array using a pointer to the first
// element and a pointer to the last element.
// What happens if we overindex by one?
// What happens if we overindex by more?
int sumElUpd(int *fst, int *lst)
{
	int sum = 0;
	while (fst <= lst)
	// if it goes out of list by one - we get huge result
	// if it goes more - we get negative
	{
		sum += *fst;
		fst += 1;
	}

	return sum;
}

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res = sumElUpd(&arr[0], &arr[9]);
	printf("%d\n", res);
	return 0;
}