#include <stdio.h>
int main()
{
  int c, first, last, middle, nElem, find, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &nElem);

  printf("Enter %d sorted integers\n", nElem);

  for (c = 0; c < nElem; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &find);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < find)
      first = middle + 1;
    else if (array[middle] == find) {
      printf("%d found at location %d.\n", find, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", find);

  return 0;
}


