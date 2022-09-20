#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Double_ll_node{
    public:
    int data;
    Double_ll_node* prev;
    Double_ll_node* next;

    // constructor
    Double_ll_node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    // printing our node
   
};
// traversing a douby linked list
 void print(Double_ll_node* &head){
        Double_ll_node* temp=head;
        while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
        }
        cout<<endl;
    }
// function to get the ;length of the doubly linked_list
    int length_ll(Double_ll_node* &head){
        int len=0;
        Double_ll_node* temp=head;

        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        return len;
    }
// function to insert at head
void insert_at_head(Double_ll_node* &head,int d){
    // this is our new node 
    Double_ll_node* temp=new Double_ll_node(d);
    // head is the head of our existing linked_list
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insert_at_tail(Double_ll_node* &tail,int d){
    // creating a node to add at tail
    Double_ll_node* temp=new Double_ll_node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void insert_at_position(Double_ll_node* &head,Double_ll_node* &tail,int position,int d)
{
    if(position==1)
    {
        insert_at_head(head,d);
        return;
    }
    Double_ll_node* temp=new Double_ll_node(d);
    if(position==length_ll(head)+1)
    {
        insert_at_tail(tail,d);
        return;
    }
    // creating a new node that will be inserted
   
    Double_ll_node* forward=head;
     Double_ll_node* backward=head;
    // creting the previous and forward node
    int cnt=1; 
    while(cnt<position){
        forward=forward->next;
        cnt++;
    }
    cout<<"forward wala no"<<forward->data<<endl;
    
    cnt=1;
    while(cnt<position-1){
        backward=backward->next;
        cnt++;
    }
    cout<<"backward wala no"<<backward->data<<endl;
    // now both backward and forward are at rewuired position
    //inserting new node to ll
    backward->next=temp;
    temp->prev=backward;
    temp->next=forward;
    forward->prev=temp;
}
int main()
{

Double_ll_node* node1=new Double_ll_node(12);
// making head
Double_ll_node* head=node1;
// definig tail
Double_ll_node* tail=node1;
print(head);
insert_at_head(head,23);
print(head);
insert_at_tail(tail,25);
print(head);
insert_at_position(head,tail,1,34);
print(head);
insert_at_position(head,tail,5,98);
print(head);
insert_at_position(head,tail,2,39);
print(head);
// cout<<length_ll(head)<<endl;
return 0;
}