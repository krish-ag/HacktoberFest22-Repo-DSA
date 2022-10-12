#include<stdio.h>
#include<stdlib.h>
struct node
{
    int exp;
    int coeff;
    struct node *next;
};
void create(struct node **start,int coef,int ex)
{
    struct node *temp;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->exp=ex;
    new->coeff=coef;
    new->next=NULL;
    if(*start==NULL)
    *start=new;
    else
    {
        temp=*start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
    }
}
void add(struct node **start1,struct node **start2,struct node **start3)
{
    struct node *t1=*start1;
    struct node *t2=*start2;
    while(t1!=NULL && t2!=NULL)
    {
        if(t1->exp > t2->exp)
        {
            create(start3,t2->coeff,t2->exp);
            t2=t2->next;
        }
        else if(t2->exp > t1->exp)
        {
            create(start3,t1->coeff,t1->exp);
            t1=t1->next;
        }
        else
        {
            if(t1->coeff + t2->coeff != 0)
            {
                create(start3,t1->coeff + t2->coeff,t1->exp);
                t1=t1->next;
                t2=t2->next;
            }
            else
            {
                t1=t1->next;
                t2=t2->next;
            }
        }
    }
    while(t1!=NULL)
    {
        create(start3,t1->exp,t1->coeff);
        t1=t1->next;
    }
    while(t2!=NULL)
    {
        create(start3,t2->exp,t2->coeff);
        t2=t2->next;
    }
}
void display(struct node **start)
{
    struct node *temp;
    if(*start==NULL)
        printf("Empty list\n");
    else{
        temp=*start;
        printf("The elements of the list are:\n");
        while(temp!=NULL){
            printf("%dx^%d + ",temp->coeff,temp->exp);
            temp=temp->next;
        }
        printf("=0\n");
    }
}
int main()
{
    int c,e;
    struct node *start1=NULL,*start2=NULL,*start3=NULL;
    int ch;
    while(1)
    {
        printf("\n1-To enter the values of polynomial 1\n2-To enter the values of polynomial 2\n3-To add the two polynomials \n4-To display the first polynomial \n5-To display the second polynomial\n6-To display the added polynomial\n7-To exit\n");
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the coefficient and exponent\n");
                    scanf("%d%d",&c,&e);
                    create(&start1,c,e);
                    break;
            case 2:printf("enter the coefficient and exponent\n");
                    scanf("%d%d",&c,&e);
                    create(&start2,c,e);
                    break;
            case 3:add(&start1,&start2,&start3);
                    break;
            case 4:display(&start1);
                    break;
            case 5:display(&start2);
                    break;
            case 6:display(&start3);
                    start3=NULL;
                    break;
            case 7:exit(0);
                    break;
            default:printf("wrong choice entered\n");

        }
    }
}
