// Demo fscanf and fprintf on a file.

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int age;
};

int main()
{
    FILE *writer = fopen("student.txt", "a");
    if (writer == NULL)
        printf("Couldn't open the file.\n");
    
    // new studentlog
    struct student newstud;
    printf("Enter Student Name and Age:");
    scanf("%s %d", newstud.name, &newstud.age);
    fprintf(writer, "%s %d\n", newstud.name, newstud.age);   // Writing on the file
    fclose(writer);
    
    // Reading the file into structure
    FILE *reader = fopen("student.txt", "r");
    if (reader == NULL)
        printf("Couldn't open the file.\n");
    
    while (!feof(reader))
    {
        
        fscanf(reader, "%s %d\n", newstud.name, &newstud.age);
        printf("%s %d\n", newstud.name, newstud.age);
    }
    
    return 0;
}
