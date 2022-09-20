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
void inserT_at_head(Node* &head,int d)
{   
   Node* temp=new Node(d); //creating a new note with the given data
   temp->next=head;// allocating temp pointer to point to the existing linked_list head
   head=temp; //shifting head to new position-begining of temp node
}
 void insert_at_tail(Node* &tail,int d)
    {
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
    }
// creting out insert_at_middle function
void insert_at_middle(Node* head,Node* tail,int position,int d){
    // now we want to traverse-we will use temp to travel
    if(position==1){
        inserT_at_head(head,d);
        return;
    }
   
    
    
    Node* temp=head;
     if(temp->next==NULL)
     {
        insert_at_tail(tail,d);
        return;
     }
    // let make temp reach (position-1)th node
    int count=1;
    while(count!= position-1){
        temp=temp->next;
        count++;
    } 
    
    // now temp is at (position-1)th node
    // lets create the node that we want to insert
    Node* insert_node=new Node(d);
    insert_node->next=temp->next;
    temp->next=insert_node;
}

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

    Node* tail=node1;    
    Node* head=node1; //head is a pointer of type node pointing to data of node1
    print(head);
    inserT_at_head(head,34);
    inserT_at_head(head,36);
    print(head);
    insert_at_middle(head,tail,2,23);
    print(head);
    cout<<"inserting at head"<<endl;
    insert_at_middle(head,tail,1,0);
    print(head);
    cout<<"inserting at tail"<<endl;
    insert_at_middle(head,tail,5,0);
    print(head);



    


return 0;
}