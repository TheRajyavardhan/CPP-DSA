#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    
    Node (int data){
        val = data;
        next = prev = NULL;
    }

};

class DoublyList{
    Node* head;
    Node* tail;

    public: 
    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int data){
        Node* newNode = new Node (data);
        if(head==NULL) head = tail = newNode;
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void push_back(int data){
        Node* newNode = new Node(data);
        if(tail==NULL) head = tail = newNode;
        else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->val << "<=>" ; 
            temp = temp->next;
        }
        cout<< "NULL" << endl;
    }

    void pop_front(){
        if(head == NULL) cout << "Empty List" << endl;
        else{
            Node* temp = head->next;
            if(temp != NULL) 
            temp->prev = NULL;
            head->next = NULL;
            delete head;
            head = temp;
        }
    }

        void pop_back(){
        if(tail == NULL) cout << "Empty List" << endl;
        else{
            Node* temp = tail->prev;
            if(temp!=NULL)
            temp->next = NULL;
            tail->prev = NULL;
            delete tail;
            tail = temp;
        }
    }
    
};

int main(){
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.print();
    dll.push_back(3);
    dll.push_back(4);
    dll.print();
    dll.pop_front();
    dll.print();
    dll.pop_back();
    dll.print();
}
