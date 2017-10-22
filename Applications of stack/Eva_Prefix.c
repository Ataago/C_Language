//Evaluation of Postfix
#include<stdio.h>
#include<conio.h>
#include<string.h>

int stack[30];
int top = -1;

void push(int operand)
{
    stack[++top] = operand;
}
int pop()
{
    return(stack[top--]);
}
void main()
{
    char postfix[30];
    int p1,p2,i;

    printf("Enter a valid Prefix Expression: ");
    gets(postfix);
    strrev(postfix);
    for(i=0; i<strlen(postfix); i++)
    {
        if(isdigit(postfix[i]))
            push(postfix[i]-'0');       //ASCII VALUE TO BE SUBTRACTED TO GET NUMBER
        else
        {
            p2=pop();
            p1=pop();
            switch(postfix[i])
            {
                case '+':
                    push(p1+p2);
                    break;
                case '-':
                    push(p1-p2);
                    break;
                case '*':
                    push(p1*p2);
                    break;
                case '/':
                    push(p1/p2);
                    break;
            }
        }
    }
    printf("Infix expression is: ");
    printf("%d",stack[top]);
}
