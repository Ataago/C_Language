#include<stdio.h>
#include<conio.h>
 int *abc(int a, int b)
 {
     int x[2];
     x[0]=a/b;
     x[1]=a%b;
     return &x;
 }
 void main()
 {
     int *y = abc(22,7);
     printf("%d, %d",y[0],y[1]);
 }
