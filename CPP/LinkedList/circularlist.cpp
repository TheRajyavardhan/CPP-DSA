#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class CircularList
{
    Node *head;
    Node *tail;

public:
    CircularList()
    {
        head = tail = NULL;
    }

    void iah(int data)
    { // insert at head;
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->next = head;
            head = newnode;
        }
    }

    void print()
    {
        if (head == NULL)
            return;
        Node *temp = head->next;
        cout << head->val << "->";
        while (temp != head)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
    void iat(int data)
    {
        Node *newnode = new Node(data);
        if (tail == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            tail->next = newnode;
            newnode->next = head;
            tail = newnode;
        }
    }

    void deleteAtHead()
    {
        if (head == NULL)
            return;
        else if (tail == head)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = head;
            head = temp->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void deleteAtTail()
    {
        if (tail == NULL)
            return;
        else if (tail == head)
        {
            delete tail;
            tail = head = NULL;
        }
        else
        {
            Node *temp = tail;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            tail = temp;
            temp = temp->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
};

int main()
{
    CircularList cl;
    cl.print();
    cl.iah(0);
    cl.print();
    cl.iah(1);
    cl.print();
    cl.iat(2);
    cl.print();
    cl.deleteAtHead();
    cl.print();
    cl.deleteAtTail();
    cl.print();
    return 0;
}
