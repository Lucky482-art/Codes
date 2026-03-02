#include <iostream>
using namespace std;

#define MAX 100

char stackArr[MAX];
int top = -1;

void push(char c){
    stackArr[++top] = c;
}

char pop(){
    return stackArr[top--];
}

int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin, str);

    // push all characters
    for(int i=0;i<str.length();i++)
        push(str[i]);

    // pop to reverse
    for(int i=0;i<str.length();i++)
        str[i] = pop();

    cout<<"Reversed string: "<<str;
}