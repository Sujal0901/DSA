#include<iostream>
using namespace std;
class Queue{
    int front;
    int rear;
    int arr[100];
    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    void enqueue(int x){
        if(rear >= 99){
            cout<<"Queue overflow";
        }else{
            arr[++rear] = x;
            if(front == -1){
                front = 0;
            }
        }
    }
    void dequeue(){
        if(front == -1 || front > rear){
            cout<<"Queue underflow";
        }else{
            front++;
        }
    }
    int peek(){
        if(front == -1 || front > rear){
            cout<<"Queue is empty";
            return -1;
        }else{
            return arr[front];
        }
    }
    bool isEmpty(){
        return front == -1 || front > rear;
    }
    void display(){
        if(front == -1 || front > rear){
            cout<<"Queue is empty";
        }else{
            for(int i = front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout<<endl;
    cout<<q.peek()<<endl;
    q.dequeue();
    q.display();
    return 0;
}