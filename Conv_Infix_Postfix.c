#include<stdio.h>
#include<conio.h>
#include<string.h>

char stack[20];
int top=-1;

void push(char item)
{
    stack[++top]=item;
}
char pop()                                                                           //int pop()
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
}

void main()
{
    char post[20],infix[20];
    int i=0,j=0;

    printf("Enter valid infix: ");
    gets(infix);

    push('#');                                                                      //void push('#')

    for(i=0;i<strlen(infix);i++)
    {
        if(isalnum(infix[i]))
            post[j++]=infix[i];

        else if(infix[i]=='(')
            push(infix[i]);

        else if(infix[i]==')')
        {
            while(stack[top]!='(')
                    post[j++] = pop();
            pop();
        }

        else
        {
            while(priority(stack[top])>=priority(infix[i]))
                post[j++]=pop();
            push(infix[i]);
        }
    }
    while(stack[top]!='#')
        post[j++]=pop();
    post[j]='\0';

    printf("\n\nPostfix is : ");
    puts(post);

}
