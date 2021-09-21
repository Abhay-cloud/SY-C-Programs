#include <stdio.h>
 
int main()
{
   int n, sum = 0, c, value;
 
   printf("Enter the 'n' numbers you want to add\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n",n);
 
   for (c = 1; c <= n; c++)
   {
      scanf("%d",&value);
      sum = sum + value;
   }

   printf("Sum of entered numbers is : %d\n",sum);
 
   return 0;
}