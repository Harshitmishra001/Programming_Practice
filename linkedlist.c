#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *next;
} node;
struct node* reverse(struct node **list){
    node *current = *list;
    node *next = NULL;
    node *prev= NULL;
    while (current != NULL) {
        next = current->next;  
        current->next = prev;   
        prev = current;         
        current = next;   
    }
    *list = prev;
    return *list;
}

int length(struct node **list){
    int len = 0;
    node *ptr = *list;
    while(ptr->next != NULL){
        len++;
        ptr=ptr->next;
    }
    return len;
}
void insertSpecific(struct node **list,int key, int number)
{
    struct node *ptr=*list;
    bool flag = true;
    int counter = 0;
    while(flag==true)
    {
        if (key == 0)
        {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->number = number;
        n->next = *list;
        *list = n;
        return;
        }
        if (counter==key-1)
        {
            node *n = (node *)malloc(sizeof(node));
            n->number=number;
            n->next=ptr->next;
            ptr->next= n;
            flag=false; 
        }
        ptr=ptr->next;
        if (ptr==NULL)
        {
            flag=false;
        }
        counter++;
    }
}
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
        printf("To insertSpecific press 5\n");
        printf("6 to revrse list");
        printf("7 to revrse list");


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
        else if (choice==5){
            int key;
            int value;
            printf("Enter the position to insert in:  ");
            scanf("%i",&key);
            printf("Enter the number to insert:  ");
            scanf("%i",&value);
            insertSpecific(&list,key,value);
        }
        else if (choice==6){
            int lengthlist = length(&list)+1;
            printf("Length is %i \n",lengthlist);
        }
        else if (choice  == 7 ){
            list = reverse(&list);
            printf("List is Reversed Try Printing it........\n");
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