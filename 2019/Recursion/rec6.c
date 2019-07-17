// Tower of Hanoi

#include <stdio.h>
#include <time.h>

int n = 20;
int functionCalls = 0;
int noOfMoves = 0;


clock_t start, end;
double cpu_time_used;

void hanoi(int n, char *source, char *destination, char *temporary)
{
    functionCalls++;
    if (n == 1)
    {
        noOfMoves++;
        printf("Step %d: Move Disc %d from %c to %c.\n", noOfMoves, n, *source, *destination);
        return;
    }
    
    hanoi(n - 1, source, temporary, destination);
    noOfMoves++;
    printf("Step %d: Move Disc %d from %c to %c.\n", noOfMoves, n, *source, *destination);
    hanoi(n - 1, temporary, destination, source);
}

int main()
{
    start = clock();
    hanoi(n, "A", "B", "C");
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTotal number of Function calls: %d\nTotal number of moves: %d\nTotal Time taken: %fs\n", functionCalls, noOfMoves, cpu_time_used);
    return 0;
}
