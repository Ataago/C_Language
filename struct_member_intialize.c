#include<stdio.h>

struct MY_TYPE {

  short int value;
  int stuff;
} MY_TYPE;

void main()
{
    struct MY_TYPE MY_TYPE;
    MY_TYPE.value = 15;
    MY_TYPE.stuff = 13;
    function();

    {
      extern struct MY_TYPE MY_TYPE;
      printf("%d", MY_TYPE.value);
    }

    printf("\n\n%d %d", MY_TYPE.value, MY_TYPE.stuff);
}

void function(){

    MY_TYPE.value = 420;
}
