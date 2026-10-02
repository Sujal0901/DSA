#include<iostream>
using namespace std;
class circular queue{
    int front;
    int rear;
    int arr[100];
    public:
    circular_queue(){
        front = -1;
        rear = -1;
    }
    void enqueue(int x){
        if((rear+1)%100 == front){
            cout<<"Queue overflow";
        }else{
            rear = (rear+1)%100;
            arr[rear] = x;
            if(front == -1){
                front = 0;
            }
        }
    }
    void dequeue(){
        if(front == -1){
            cout<<"Queue underflow";
        }else{
            if(front == rear){
                front = rear = -1;
            }else{
                front = (front+1)%100;
            }
        }
    }
    int peek(){
        if(front == -1){
            cout<<"Queue is empty";
            return -1;
        }else{
            return arr[front];
        }
    }
    bool isEmpty(){
        return front == -1;
    }
    void display(){
        if(front == -1){
            cout<<"Queue is empty";
        }else{
            int i = front;
            while(i != rear){
                cout<<arr[i]<<" ";
                i = (i+1)%100;
            }
            cout<<arr[rear];
        }
    }
};