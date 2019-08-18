// Find all subsequences for a string

#include <stdio.h>
#include <string.h>

void subsets(char *problem, char solution[])
{
    if (problem[0] == '\0')
    {
        printf("%s\n", solution);
        return;
    }
    
    
    // Reduce the problem
    subsets(problem + 1, solution);
    
    char newsolution[10];
    strcat(newsolution, solution);
    newsolution[strlen(solution)] = *problem;
    newsolution[strlen(solution) + 1] = '\0';
    
    subsets(problem + 1, newsolution);

}
int main()
{
    char string[] = "abc";
    
    subsets(string, "");
    return 0;
}
