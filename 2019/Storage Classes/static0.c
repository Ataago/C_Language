// Demo Static storage class
#include <stdio.h>

int countFuncCall()
{
    static int count = 0;
    count++;
    return count;
}
int main()
{
    for (int i = 0; i < 3; i++)
       countFuncCall();
    
    printf("%d times the function is called!\n", countFuncCall());
    return 0;
}
