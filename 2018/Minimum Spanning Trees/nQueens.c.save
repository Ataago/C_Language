//  N-Queens problem to print all possible solutions.
//      Place n number of queens in n x n chessBoard so that no 2 queens attack.
//      Note: Using Backtracking

//  @author Mohammed Ataaur Rahaman
//  School: Dayananda Sagar
//  Date: 22 April, 2018


#include<conio.h>
#include<stdio.h>

int N, vector[100];
int i, count = 0;

int place(int cur)
{
    for(i = 1; i <= cur - 1; i++)
    {
        if(vector[i] == vector[cur])
            return 0;
        else if(abs(vector[i] - vector[cur]) == abs(i - cur))
            return 0;
    }
    return 1;
}

void N_Queen()
{
    int cur = 1;
    vector[cur] = 0;

    while(cur != 0)
    {
        vector[cur] += 1;   //place at the first place.

        while(vector[cur] <= N && place(cur) == 0)  //if cant be placed.. then increment.
            vector[cur] += 1;

        if(vector[cur] <= N)
        {
            if(cur == N)
            {
                count++;
                printf("\nSolution %d --> ",count);
                for(i = 1; i <= N; i++)
                    printf("%d ",vector[i]);
            }
            else            //next queen
            {
                cur++;
                vector[cur] = 0;
            }
        }
        else                //previous queen
            cur--;
    }
}
void main()
{
    printf("Enter Number of Queens(N): ");
    scanf("%d",&N);

    if(N < 4)
        printf("Solution Does't exists.");
    else
    {
        printf("Solution: \n");
        N_Queen();
    }
}
