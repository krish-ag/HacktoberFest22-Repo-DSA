#include <stdio.h>
#include <ctype.h>
char Stk[100];
int top = -1;
void push(char x)
{
Stk[++top] = x;
}
char pop()
{
if (top == -1)
return -1;
else
return Stk[top--];
}
int priority(char x)
{
if (x == '(')
return 0;
if (x == '+' || x == '-')
return 1;
if (x == '*' || x == '/')
return 2;
return 0;
}
int main()
{
char *e, x;
char exp[100];
printf("Enter expression :");
scanf("%s", exp);
printf("\n");
e = exp;
while (*e != '\0')
{
if (isalnum(*e))
printf("%c ", *e);
else if (*e == '(')
push(*e);
else if (*e == ')')
{
while ((x = pop()) != '(')
printf("%c ", x);
}
else
{
while (priority(Stk[top]) >= priority(*e))
printf("%c ", pop());
push(*e);
}
e++;
}
while (top != -1)
{
printf("%c ", pop());
}
return 0;
}