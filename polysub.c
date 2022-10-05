#include <stdio.h>
#include <stdlib.h>
struct node {

int coeff;

int pow;

struct node *next; };
struct node *poly1 = NULL, *poly2 = NULL, *poly = NULL;

void create(struct node *newnode,int n){

for(int i=0;i<n;i++){
    printf("enter the coeff of %d element:\n",(i+1));
    scanf("%d", &newnode->coeff);
    printf("enter the power of %d element:\n",(i+1));
    scanf("%d", &newnode->pow);
    newnode->next = (struct node *)malloc(sizeof(struct node));
    newnode = newnode->next; newnode->next = NULL;

}

}

void show(struct node *newnode) {
    while (newnode -> next != NULL) {

printf("%dx^%d", newnode -> coeff, newnode->pow);
newnode = newnode -> next;
if (newnode->next != NULL) printf("+");

}
printf("\n");

}
void polysub(struct node *poly1, struct node *poly2, struct node *poly) {

while (poly1 -> next && poly2 -> next) {
    if (poly1 -> pow > poly2 -> pow) {
        poly -> pow = poly1 -> pow;
        poly -> coeff = poly1 -> coeff;
        poly1 = poly1 -> next;
        
    }
    else if (poly1->pow < poly2->pow)
    {
        poly -> pow = poly2 -> pow;
        poly -> coeff = -(poly2 -> coeff);
        poly2 = poly2 -> next;
        
    }
    else
    {
        poly -> pow = poly1 -> pow;
        poly -> coeff = poly1 -> coeff - poly2 -> coeff;
        poly1 = poly1 -> next; poly2 = poly2 -> next;

}
poly -> next = (struct node *)malloc(sizeof(struct node));
poly = poly -> next;
poly -> next = NULL;

}
while(poly1->next || poly2->next)

{
    if (poly1 -> next)
    {
        poly -> pow = poly1 -> pow;
        poly -> coeff = poly1 -> coeff;
        poly1 = poly1 -> next;
        
    } if (poly2 -> next)
    {
        poly -> pow = poly2 -> pow;
        poly -> coeff = -(poly2 -> coeff);
        poly2 = poly2->next;
        
    }
    poly->next = (struct node *)malloc(sizeof(struct node));
    poly = poly->next;
    poly->next = NULL;

}

}

int main()

{

int a,b;

poly1 = (struct node *)malloc(sizeof(struct node));
poly2 = (struct node *)malloc(sizeof(struct node));
poly = (struct node *)malloc(sizeof(struct node));
printf("Enter the number of terms in 1st polynomial\n");
scanf("%d",&a);
printf("enter 1st number:");
create(poly1,a);
printf("Enter the number of terms in 2nd polynomial\n");
scanf("%d",&b);
printf("enter 2nd number:");
create(poly2,b);
printf("1st Number:");
show(poly1);
printf("2nd Number:");
show(poly2);
polysub(poly1, poly2, poly);
printf("The required result is:");
show(poly);

}
