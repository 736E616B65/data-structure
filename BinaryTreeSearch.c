#include <stdio.h>

/* Binary tree search */
int BTSearch(int array[], int len, int target)
{
	int first = 0;
	int last = len -1;
	int mid;

	while(first <= last)
	{
		mid = (first + last) / 2;

		if(target == array[mid])
		{
			return mid;
		}
		else 
		{
			if(target < array[mid])   
				last = mid -1;
			else
				first = mid +1;
		}
	}
	return -1;
} 
