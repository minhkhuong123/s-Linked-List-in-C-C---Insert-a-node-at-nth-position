#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* head;
void Insert(int data,int n)
{
    struct node * ptr2=(struct node *)malloc(sizeof(struct node));
    ptr2->data=data;
    ptr2->next=NULL;
    if(n==1 )
    {
        ptr2->next=head;
        head=ptr2;
        return;
    }
    struct node* ptr;
    ptr=head;
    for(int i=0;i<n-2;i++)
    {
        ptr=ptr->next;
    }
    ptr2->next=ptr->next;
    ptr->next=ptr2;
}
void print()
{
    struct node* temp=head;
    while( temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    struct node* head=NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,3);
    Insert(5,4);
    print();
    return 0;
}