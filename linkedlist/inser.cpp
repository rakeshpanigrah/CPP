#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
}
//first

Node *insertfirst ( Node * head ,int value){
   Node *temp = new Node(value);
   temp->next = head;
   return temp;

}

// last

Node *insertlast( Node * head , int value){

    if(head == NULL){
        return head;
    }

    Node *temp = new Node(value);
    Node *curr = head;
    while(curr->next!= NULL){
       curr = curr->next;
    }
     curr->next = temp;
     return head;

}

// insert at given position

Node *insertposition (Node * head,int value,int position){
    Node * temp = new Node(value);

    if(head == NULL){
        if (position ==1){
            return temp;
        }
        return head;
    }

    if(position == 1){
        temp->next = head;
        return temp;
    }

    Node * curr = head;
    for(int i = 1;i<position-1;i++){
        curr = curr->next;
        if(curr == NULL){
            cout<<"out of range\n";
            return head;
        }
    }
    temp->next= curr->next;
    curr->next= temp;
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next=new Node(30);
	head->next->next->next=new Node(40);
    head = insertfirst(head,5);
    head = insertlast(head,50);
    head = insertposition(head,15,3);
	printlist(head);
}