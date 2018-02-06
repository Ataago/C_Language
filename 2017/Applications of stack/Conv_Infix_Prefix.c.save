// Converstion of INFIX to PREFIX
// Converstion of INFIX to PREFIX
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>

char stack[30];
int top = -1;

void push(char symbol)
{
    stack[++top] = symbol;
}
char pop()
{
    return(stack[top--]);
}
int priority(char symbol)
{
    if(symbol == '(' || symbol == '#')
        return(1);
    if(symbol == '+' || symbol == '-')
        return(2);
    if(symbol == '*' || symbol == '/')
        return(3);
    if(symbol == '$' || symbol == '^')
        return(4);
    printf("invalid Expression");
    exit(0);
}
void main()
{
    char infix[30], prefix[30];
    int i,j=0;

    printf("Enter valid infix Expression: ");
    gets(infix);
    strrev(infix);

    push('#');
    for(i=0; i<strlen(infix); i++)
    {
        if(isalnum(infix[i]))
            prefix[j++] = infix[i];
        else if(infix[i] == '(')
            push(infix[i]);
        else if(infix[i] == ')')
        {
            while(stack[top] != '(')
                  prefix[j++] = pop();
             pop();
        }
        else
        {
            while(priority(stack[top]) >= priority(infix[i]))
                prefix[j++] = pop();
            push(infix[i]);
        }
    }
    while(stack[top] != '#')
        prefix[j++] = pop();
    prefix[j] = '\0';

    printf("\n Postfix Expression: ");
    strrev(prefix);
    puts(prefix);
}
