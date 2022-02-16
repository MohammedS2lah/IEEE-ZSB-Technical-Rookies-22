#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int l, int h, int x)
{
	while (l <= h)
    {
		int m = l + (h - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			h = m - 1;
	}
	return -1;
}

int main(void)
{
	int arr[] = { 1, 3, 5, 20, 30, 40};
	int n = sizeof(arr)/ sizeof(arr[0]);
	int x = 3;
	int result = binarySearch(arr, 0, n - 1, x);
	    if(result == -1)
            printf("Element is not present in array");
        else printf("Element is present at index %d",result);

	return 0;
}
