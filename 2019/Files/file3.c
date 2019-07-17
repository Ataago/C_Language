// Reading characters from the stdin on a dynamic memory on the heap by malloc

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    char *input;
    int count = 0;
    int capacity = SIZE;
    
    input = (char*)malloc(sizeof(char)*SIZE);
    if (input == NULL)
        printf("Couldn't allocate memory.\n");
    
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (count == capacity)  // when out of allocated memory
        {
            capacity += SIZE;
            input = realloc(input, capacity);
        }
        input[count++] = ch;
    }
    
    printf("%s", input);
    return 0;
}
