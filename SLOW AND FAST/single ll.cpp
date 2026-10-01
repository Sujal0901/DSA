#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;
        next = NULL;
        

    }
};
class list{
    Node* head;
    Node* tail;
public:
    list(){
        head = tail = NULL;
    }

    void push_front(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    };
    void push_back(int value){
        Node*newnode = new Node(value);
        if(head == NULL){
            head = tail = newnode;
        }else{


            tail->next = newnode;
            tail = newnode;
        

        }
    }
    void pop_front(){
        if(head == NULL){
            return;
        }
        Node*temp = head;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            return;
        }
        Node*temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        
        delete tail;
        tail = temp;
         tail->next = NULL;
       
    }
    void insert(int value ,int pos){
        if(pos<0){
            return;

        }
        if(pos == 0){
            push_front(value);
            return;
        }
                Node*temp = head;
                for(int i =0;i<pos-1;i++){
                    if(temp == NULL){
                        return;
                    }
                    temp= temp->next;
                   
                }
                Node*newNode = new Node(value);
                newNode->next = temp->next;
                temp->next = newNode;

    }

    void printLL() {
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.insert(4,2);
   
    ll.printLL();   
    return 0;
}
