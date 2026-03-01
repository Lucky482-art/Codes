//Using Array

// #include <iostream>
// using namespace std;

// #define SIZE 5
// int stackArr[SIZE], top = -1;

// void push(int x){
//     if(top==SIZE-1) cout<<"Stack Overflow\n";
//     else{
//         stackArr[++top]=x;
//         cout<<"Pushed "<<x<<endl;
//     }
// }

// void pop(){
//     if(top==-1) cout<<"Stack Underflow\n";
//     else cout<<"Popped "<<stackArr[top--]<<endl;
// }

// void peek(){
//     if(top==-1) cout<<"Empty\n";
//     else cout<<"Top = "<<stackArr[top]<<endl;
// }

// void display(){
//     for(int i=top;i>=0;i--) cout<<stackArr[i]<<" ";
//     cout<<endl;
// }

// int main(){
//     push(10); push(20); push(30);
//     display();
//     pop();
//     peek();
// }



// Using Linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* topNode=NULL;

void push(int x){
    Node* newNode=new Node();
    newNode->data=x;
    newNode->next=topNode;
    topNode=newNode;
}

void pop(){
    if(topNode==NULL) cout<<"Underflow\n";
    else{
        cout<<"Popped "<<topNode->data<<endl;
        topNode=topNode->next;
    }
}

void display(){
    Node* temp=topNode;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    push(5); push(10); push(15);
    display();
    pop();
    display();
}