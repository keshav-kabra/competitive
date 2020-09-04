#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head;
node* createnode(int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}


void insert_at_end(int data)
{
    //create the node
    node* newnode = createnode(data);
    if(head == NULL) 
    {
        head = newnode;
    }
    else{
        //traverse till the last node
        node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        //temp is the last node
        temp->next = newnode;
    }

}

//print functio
void print()
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


void printRecursively(node *head)
{
    if(head == NULL) return ;
    printRecursively(head->next);
    cout<<head->data<<" ";
   
}


int main()
{
    head = NULL; 
    insert_at_end(12);
    insert_at_end(20);
    insert_at_end(45);
    insert_at_end(23);

    print();
    printRecursively(head);
}