#include<iostream>
using namespace std;
class Stack{
    int top;
    int arr[100];
    public:
    Stack(){
        top= -1;

    }
    void push(int x){
        if(top >= 99){
            cout<<"stack overflow";
        }else{
            arr[++top] = x;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"stack underflow";
        }else{
            top--;
        }
    }
    int peek(){
        if(top == -1){
            cout<<"stack is empty";
            return -1;
        }else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return top == -1;
    }
    void display(){
        if(top == -1){
            cout<<"stack is empty";
        }else{
            for(int i = top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout<<endl;
    cout<<s.peek()<<endl;
    s.pop();
    s.display();
    return 0;
}