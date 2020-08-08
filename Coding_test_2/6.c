/**
Name = Shamima Akther
ID = 1834902616
**/

/* Design a Double way non circular linked list */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
node* insert_at(node *temp, int pos, int data);
node *delete_front(node *temp);
node *copy_list_recursive(node *list1);
node *merge_list(node *list1,node *list2);
void display_reverse(node *temp);
void printList(node* temp);

int main()
{
    node* head = NULL;
    node *list1 = NULL;
    node *list2 = NULL;
    node *list3 = NULL;

    int value, option, pos;
    do
    {
        enum Queue_operations {a = 1,b,c,d,e,f,g};
        system(" cls ");
        printf("\n Choose Operations for 'Double Way Linked List' from below: \n");
        printf("\n %d : Insert at",a);
        printf("\n %d : Delete Front",b);
        printf("\n %d : Copy Recursively",c);
        printf("\n %d : Merge Two list",d);
        printf("\n %d : Display Reverse",e);
        printf("\n %d : Display",f);
        printf("\n %d : Exit Program",g);

        printf("\n");

        printf("\n Enter your Option : ");
        scanf("%d", &option);

        if(option == 1)
        {
            printf(" Enter Position : ");
            scanf("%d", &pos);

            printf(" Enter Element : ");
            scanf("%d", &value);

            head = insert_at(head,pos,value);

            printf("\n\t\t %d, Data inserted. ",value);
            printf("\n");

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 2)
        {
            head = delete_front(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 3)
        {
            list1 = head;
            list2 = copy_list_recursive(list1);
            head = list2;
            printList(head);
            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if (option == 4)
        {

            list3 = merge_list(list1,list2);
            head = list3;
            printList(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 5)
        {
            printListReverse(head);
            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 6)
        {

            printList(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\n\t Invalid Option, Please Enter Correct Option Between '1 to 7' ");

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
    }
    while(option != 7);
    return 0;
}

void printList(node* temp)
{
    node* last;
    if(temp == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\n List is : ");

        while (temp != NULL)
        {
            printf(" %d ", temp ->data);
            last = temp;
            temp = temp ->next;
        }
    }
}
void printListReverse(node *temp)
{
    node* last;
    if(temp == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nTraversal in reverse direction \n");
        while (last != NULL)
        {
            printf(" %d ", last->data);
            last = last->prev;
        }
    }
}
node *delete_front(node *temp)
{
    if(temp!= NULL)
    {
        node *new_head = temp->next;
        free(temp);
        return new_head;
    }
    printf("Underflow Linked List");
    return temp;
}
node* insert_at(node *temp, int pos, int data)
{
    node *head = temp, *prev, *new_node;
    int i = 2;
    if(pos < 1 || pos > 4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos == 1)
    {
        new_node = (node*) malloc(sizeof(node) );
        new_node->data = data;
        new_node->next = temp;
        return new_node;
    }
    while(temp)
    {
        prev = temp;
        if(i == pos)
        {
            new_node = (node*) malloc(sizeof(node)) ;
            new_node->data = data;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf("Invalid Index\n");
    return head;
}
node *copy_list_recursive(node *list1)
{
    if(list1 == NULL)
    {
        return NULL;
    }
    node *temp = (node *)malloc(sizeof(node));
    temp->data = list1->data;
    temp->next = copy_list_recursive(list1->next);
    return temp;
}
node *merge_list(node *list1,node *list2)
{
    node *head, *temp, *new_node;
    head = copy_list_recursive(list1);
    temp = head;
    while (temp -> next)
    {
        temp = temp -> next;
    }
    temp -> next = copy_list_recursive(list2);
    return head;
}

