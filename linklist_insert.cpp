#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }

};

void insertStart(Node* &head,int val){
    Node* p =new Node(val);
    p->next=head;
    head= p;
}

void insertEnd(Node* head,int val){
    Node* end=new Node(val);
    if(head==NULL){
        head=end;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=end;

}


void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
}

int main(){
   Node* n1=new Node(10);
   Node* n2=new Node(20);
   Node* n3=new Node(30);
   n1->next=n2;
   n2->next=n3;
   display(n1);
   cout<<endl;
   insertStart(n1,5);
   display(n1);
   insertEnd(n1,40);
   display(n1);

   return 0;

}