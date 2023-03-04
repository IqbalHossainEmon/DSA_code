#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp;

void anyPositionInsert()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    int pos;
    printf("Enter the position:");
    scanf("%d", &pos);
    temp = head;
    int c = 0;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    if (pos > c)
    {
        printf("can't insert at %d position\n", pos);
    }
    else
    {
        printf("Enter the data:");
        scanf("%d", newNode->data);
        int i = 0;
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
        }
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void begInsert()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node *));

    printf("Enter the data:");
    scanf("%d", &newNode->data);
    newNode->prev = NULL;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("Node Inserted\n");
}
void endInsert()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node *));
    printf("Enter the data:");
    scanf("%d", &newNode->data);
    if (head == NULL)
    {
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        newNode->next = NULL;
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void display()
{
    temp = head;
    printf("NULL <==> ");
    while (temp != NULL)
    {
        printf("%d <==> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
};
int main()
{
    int ch;
    do
    {
        printf("1.Insert from beg\n");
        printf("2.Insert from end\n");
        printf("3.Display\n");
        printf("4.Insert at any position\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            begInsert();
            break;
        case 2:
            endInsert();
            break;
        case 3:
            display();
            break;
        case 4:
            anyPositionInsert();
            break;
        }
    } while (1);
}