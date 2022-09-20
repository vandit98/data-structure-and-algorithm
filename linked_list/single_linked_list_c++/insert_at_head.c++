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
// this function will take reference(because we want to update existing linked_list) and new data
void inserT_at_head(Node* &head,int d)
{   
   Node* temp=new Node(d); //creating a new note with the given data
   temp->next=head;// allocating temp pointer to point to the existing linked_list head
   head=temp; //shifting head to new position-begining of temp node
}
// lets print our linked_list
void print(Node* &head){
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
    // cout<<node1->data<<endl; //printing the node data
    // cout<<node1->next<<endl; //printing the pointer pointing address

    // we want to print linked_list now
    Node* head=node1; //head is a pointer of type node pointing to data of node1
    inserT_at_head(head,12);
    // calling print_function
    print(head);
    inserT_at_head(head,25);
    print(head);

return 0;
}