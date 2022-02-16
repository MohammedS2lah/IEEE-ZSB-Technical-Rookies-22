#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,count = 0;
  int arr[100], temp[100];
  int i,j;

  printf("\nEnter the number of array elements\n");
  scanf("%d", &n);
  printf("\nEnter the array elements\n");
  for ( i= 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\nArray Before Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < count; j++)
    {
      if (arr[i] == temp[j])
        break;
    }
    if (j == count)
    {
      temp[count] = arr[i];
      count++;
    }
  }
  printf("\nArray After  Removing Duplicates: ");
  for (i = 0; i < count; i++)
    printf("%d ", temp[i]);

  return 0;
}
