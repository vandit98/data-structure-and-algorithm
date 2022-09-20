#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data; //it will contain data
    Node* next; //it will point to next-this is a pointer
    
    // defining constructor
    Node(int data){
        this->data=data;
        // next pointer will point to next
        this->next=NULL;
    }


    

};

    void insert_at_tail(Node* &tail,int d)
    {
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
    }

// printing our reversed_linked_list
void print_reverse(Node* &head){
 Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
} 

int main()
{
// creating an object of Node class
    Node* node1=new Node(10); //a node is created
    
    Node* head=node1; //head is a pointer of type node pointing to data of node1
   
    Node* tail=node1; //tail will point at the data of node 1
    insert_at_tail(tail,34);
    print_reverse(head);
    insert_at_tail(tail,35);
    print_reverse(head);
    


return 0;
}