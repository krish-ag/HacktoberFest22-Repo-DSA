//21BCT0097 Ishank Bhatnagar
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
}*first = NULL;

void insert_beginning(int x)
{
    struct node* t;
    t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    t->next = first;
    first = t;
}

void insert_end(int y)
{
    struct node* t, * t2;
    t = (struct node*)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("Unable to allocate memory\n");
        return;
    }
    else
    {
        t->data = y;
        t->next = NULL;
        t2 = first;
        while (t2->next != NULL)
            t2 = t2->next;
        t2->next = t;
    }
}

void insert_pos(int x)
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    struct node* t;
    int pos = 0;
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {

        printf("Enter the position (considering positioning to start from 0):\n ");
        scanf("%d", &pos);
        p->data = x;
        t = first;
        for (int i = 1;i < pos;i++)
        {
            t = t->next;
            if (t == NULL)
            {
                printf("Unable to allocate memory\n");
                return;
            }

        }
        p->next = t->next;
        t->next = p;
    }

}

void delete_beginning()
{
    struct node* c;
    if (first == NULL)
        printf("Empty singly linked list! Hence nothing can be deleted!\n");
    c = first;
    first = first->next;
    free(c);
}

void delete_end()
{
    if (first == NULL)
    {
        printf("Empty singly linked list! Hence nothing can be deleted!\n");
    }
    struct node* c = first;
    struct node* prev = NULL;
    while (c->next != NULL)
    {
        prev = c;
        c = c->next;
    }
    if (prev->next != NULL)
        prev->next = NULL;
    free(c);
}

void delete_pos()
{
    struct node* p, * p2;
    int pos;
    printf("Enter position(considering the positions to start from 0):\n");
    scanf("%d", &pos);
    p = first;
    for (int i = 0;i < pos;i++)
    {
        p2 = p;
        p = p->next;

        if (p == NULL)
        {
            printf("Underflow error! Cannot delete!\n", pos);
            return;
        }
    }
    p2->next = p->next;
    free(p);
}

int search(int y)
{
    struct node* t;
    t = first;
    int count = 0;
    while (t != 0)
    {
        if (t->data == y)
        {
            return count;
        }
        count++;
        t = t->next;
    }
    return 0;
}

void display()
{
    printf("Elements stored in the singly linked list:\n");
    if (first == NULL)
    {
        printf("Empty singly linked list!\n");
        return;
    }
    struct node* c = first;
    int count;
    count = 0;
    while (c != NULL)
    {
        printf("%d ", c->data);
        count++;
        c = c->next;
    }
    printf("\n");
    printf("number of nodes: %d\n", count);
    printf("\n");
}

int main()
{
    int x, p, s, found;
    int w1, u;
    int h = 1;
    while (h != 0)
    {
        printf("Enter '1' for Insertion:\n");
        printf("Enter '2' for Deletion:\n");
        printf("Enter '3' to Search:\n");
        printf("Enter '4' to Display:\n");
        printf("Enter '5' to Exit:\n");
        scanf("%d", &w1);
        printf("\n");
        switch (w1)
        {
        case 1:
        {
            printf("Enter 1. for Beginning insertion:\n");
            printf("Enter 2. for End insertion:\n");
            printf("Enter 3. for Position insertion:\n");
            scanf("%d", &u);
            printf("\n");
            switch (u)
            {
            case 1:
                printf("Enter element to be inserted in the beginning of the singly linked list:\n ");
                scanf("%d", &x);
                insert_beginning(x);
                break;
            case 2:
                printf("Enter element to be inserted at the end of the singly linked list:\n ");
                scanf("%d", &x);
                insert_end(x);
                break;
            case 3:
                printf("Enter element to be inserted at a particular position of the singly linked list:\n ");
                scanf("%d", &x);
                insert_pos(x);
                break;
            }
            break;

        }

        case 2:
        {
            printf("\nEnter 1. for Beginning deletion:\n");
            printf("\nEnter 2. for End deletion:\n");
            printf("\nEnter 3. for Position deletion:\n");
            scanf("%d", &u);
            printf("\n");
            switch (u)
            {
            case 1:
                delete_beginning();
                break;
            case 2:
                delete_end();
                break;
            case 3:
                delete_pos();
                break;
            }
            break;
        }

        case 3:
            printf("Enter element to be searched:\n");
            scanf("%d", &s);
            found = search(s);
            if (found != 0)
            {
                printf("Element found at position=%d\n", found + 1);
            }

            else
            {
                printf("Element not found\n");
            }

            break;

        case 4:
            display();
            break;

        case 5:
            h = 0;
            break;

        default:
            printf("Invalid input! Enter a choice given in the options!");
            break;
        }
    }

    return 0;
}