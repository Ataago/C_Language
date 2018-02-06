//conv of postfix to infix
#include<stdio.h>
#include<conio.h>
#include<string.h>

char stack[30][30];
int top = -1;

void push(char operand[])
{
   top = top+1;
   strcpy(stack[top],operand);
}
char *pop()                                                     //cant return an expression as b+c if it was not a pointer function
{
    return(&stack[top--]);
}
void main()
{
    char postfix[30],infix[30],operator[2], *p1,*p2;
    int i;

    printf("Enter a valid Postfix Expression: ");
    gets(postfix);

    for(i=0; i<strlen(postfix); i++)
    {
        operator[0] = postfix[i];
        operator[1] = '\0';
        if(isalnum(postfix[i]))
            push(operator);
        else
        {
            p2=pop();
            p1=pop();

            strcpy(infix,"(");
            strcat(infix,p1);
            strcat(infix,operator);
            strcat(infix,p2);
            strcat(infix,")");
            push(infix);
        }
    }
    printf("Infix expression is: ");
    puts(stack[top]);
}
