#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void deletion(struct node **list, int key)
{
    struct node *temp = *list;
    struct node *prev = NULL;
    bool flag = false;

    if (temp != NULL && temp->number == key)
    {
        *list = temp->next;
        free(temp);
        flag = true;
    }
    else
    {
        while (temp != NULL && temp->number != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            printf("Number not found in the list.\n");
            return;
        }
        prev->next = temp->next;
        free(temp);
        flag = true;
    }

    if (flag)
    {
        printf("Number %d deleted.\n", key);
    }
}

void insert(node **list, int number)
{
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL)
    {
        exit(1);
    }
    n->number = number;
    n->next = NULL;
    if (*list == NULL)
    {
        *list = n;
    }
    else
    {
        node *ptr = *list;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}

void print(node *list)
{
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i->",ptr->number);
    }
    printf("NULL\n");
}

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        insert(&list, number);
    }

    bool flag = true;
    while (flag)
    {
        printf("For Insert in list press 1\n");
        printf("For printing list press 2\n");
        printf("To exit press 3\n");
        printf("To delete press 4\n");

        int choice;
        scanf("%i", &choice);

        if (choice == 2)
        {
            print(list);
        }
        else if (choice == 1)
        {
            int num;
            printf("Enter Number: ");
            scanf("%i", &num);
            insert(&list, num);
        }
        else if (choice == 3)
        {
            flag = false;
        }
        else if (choice == 4)
        {
            int key;
            printf("Enter Number to delete: ");
            scanf("%i", &key);
            deletion(&list, key);
        }
        else
        {
            printf("Wrong input!!!!!! \n");
        }
    }

    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}