// Using Array

// #include <iostream>
// using namespace std;

// #define SIZE 5
// int q[SIZE], front=-1, rear=-1;

// void enqueue(int x){
//     if(rear==SIZE-1) cout<<"Overflow\n";
//     else{
//         if(front==-1) front=0;
//         q[++rear]=x;
//     }
// }

// void dequeue(){
//     if(front==-1) cout<<"Underflow\n";
//     else{
//         cout<<"Removed "<<q[front]<<endl;
//         front++;
//     }
// }

// void display(){
//     for(int i=front;i<=rear;i++) cout<<q[i]<<" ";
//     cout<<endl;
// }

// int main(){
//     enqueue(10); enqueue(20); enqueue(30);
//     display();
//     dequeue();
//     display();
// }



// Using Linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node *frontNode=NULL, *rearNode=NULL;

void enqueue(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(rearNode==NULL) frontNode=rearNode=temp;
    else{
        rearNode->next=temp;
        rearNode=temp;
    }
}

void dequeue(){
    if(frontNode==NULL) cout<<"Empty\n";
    else{
        cout<<"Removed "<<frontNode->data<<endl;
        frontNode=frontNode->next;
    }
}

void display(){
    Node* temp=frontNode;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    enqueue(1); enqueue(2); enqueue(3);
    display();
    dequeue();
    display();
}