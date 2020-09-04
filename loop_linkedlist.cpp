#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* head;

Node* createnode(int data)
{
    Node* newnode = new Node;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}


void insert_at_end(int data)
{
    Node *newnode = createnode(data);
    if(head == NULL) 
    {
        head = newnode;
    }
    else{

        //traverse till last node
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newnode;


    }

}


void sort_linkedlist()
{
    vector<int > arr;
    Node* temp = head;
    while(temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    sort(arr.begin() , arr.end());
    for(auto e : arr)
    {
        cout<<e<<" ";
    }
}


//print function
void print()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

int main()
{
    head = NULL;
    insert_at_end(12);
    insert_at_end(10);
    insert_at_end(8);
    insert_at_end(5);
    print();
    cout<<endl;
    sort_linkedlist();

    

}