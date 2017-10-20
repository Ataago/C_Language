#include <stdio.h>
int fibonaci(int i)
{
   if(i <= 1)  return i;
   return fibonaci(i-1) + fibonaci(i-2);
}

void  main()
{
   int i, n;
   printf("Enter the number \n");
	 scanf("%d",&n);
   for (i = 0; i < n; i++)
   {
      printf("%d\t", fibonaci(i));
   }
}
