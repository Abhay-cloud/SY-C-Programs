#include <stdio.h>

void main()
{
  int x[50], y[50], n;
  int i, j, k, count = 1;
 
  printf("Enter size of a bit string:");
  scanf("%d", &n);
 
  printf("Enter the bit string(0's &1's):");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &x[i]);
  }
 
  i = 0;
  j = 0;
 
  while (i < n)
  {
    if (x[i] == 1)
    {
      y[j] = x[i];
 
     //count is less than 5 as 0 is inserted after every 
     //5 consecutive 1's
      for (k = i + 1; x[k] == 1 && k < n && count < 5; k++)
      {
        j++;
        y[j] = x[k];
        count++;
 
        if (count == 5)
        {
          j++;
          y[j] = 0;
        }
 
        i = k;
      }
    }
    else
    {
      y[j] = x[i];
    }
 
    i++;
    j++;
  }
 
 //Displaying final result
  printf("Result of Bit Stuffing:");
  for (i = 0; i < j; i++)
  {
    printf("%d", y[i]);
  }

}