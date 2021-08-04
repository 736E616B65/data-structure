/* Binary tree search recursive */
int BTSearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if(first > last)
		return -1;

	mid = (first + last) / 2;

	if(ar[mid] == target)
		return mid;

	else if(target < ar[mid])
		return BTSearchRecur(ar, first, mid - 1, target);
	
	else
		return BTSearchRecur(ar, mid + 1, last, target);
}
