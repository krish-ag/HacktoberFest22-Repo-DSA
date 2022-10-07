//conversion of infix expression to postfix using array

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 15
char infix[N];
char stack[N];
char postfix[N];
int top=-1;
void push( char data)
{
    if(top==N-1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=data;
    }
}
char pop()
{
    char c;
    if(top==-1)
    {
        printf("stack underflow:\n");
        exit(1);

    }
    c=stack[top];
    top--;
    return c;
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int space(char c)
{
    if(c== ' ' || c=='\t')
        return 1;
    else
        return 0;
}
int pre(char symbol)
{
    switch(symbol)
    {
        case '^':
            return 3;
        case '/':
        case '*':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}
void print()
{
    int i=0;
    printf("the equivalent postfix expression is:\n");
    while(postfix[i])
    {
        printf("%c", postfix[i++]);
    }
    printf("\n");
}
void IntoPo()
{
    int i=0,j=0;
    char next;
    char sym;
    for(i=0;i<strlen(infix); i++)
    {
        sym=infix[i];
        if(!space(sym))
        {
            switch(sym)
            {
                case '(':
                    push(sym);
                    break;
                case ')':
                    while((next=pop())!='(')
                        postfix[j++]=next;
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while(!isEmpty() && pre(stack[top]) >= pre(sym))
                        postfix[j++]=sym;
                    push(sym);
                    break;
                default:
                    postfix[j++]=sym;
            }
        }
    }
    while(!isEmpty())
        postfix[j++]=pop();
    postfix[j]='\0';
}

int main()
{
printf("Enter the infix expression:\n");
gets(infix);
IntoPo();
print();
return 0;
}
