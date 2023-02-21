#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
    int val;
    Node* next;
    Node()
    {
        val = 0;
        next = NULL;
    }
    Node(int v)
    {
        val = v;
        next = NULL;
    }

};

void insertAtHead(Node* &head , Node* &tail, int val)
{
    Node *temp = new Node(val);
    if(head == NULL)
    {
        head = temp ;
        tail = temp;
        return;
    }
    temp ->next = head;
    head = temp;
}
void insertAtMid(Node* &head , Node * &tail ,int val, int i)
{
    Node *temp = new Node(val); 
    Node * cur = head;
    for(int j =0;j<i;j++)
    {
        cur = cur ->next;
    }
    temp ->next = cur ->next;
    cur ->next = temp ;
}
void insertAtTail(Node* &head , Node * &tail ,int val)
{
    Node *temp = new Node(val);
     if(head == NULL)
    {
        head = temp ;
        tail = temp;
        return;
    }
    tail ->next = temp;
    tail = temp;
}
void deleteAtHead( Node *&head)
{
    head = head ->next;
}

void deletetail(Node *&head)
{
    if(head == NULL)
        return ;
    if(head ->next == NULL)
    {
        head = NULL;
    }
    Node * cur  = head;
    Node * prev ;
    while(cur ->next != NULL)
    {
        prev= cur;
        cur = cur ->next;
    }
    prev ->next = cur ->next;

}
void print(Node *head)
{

    while(head != NULL)
    {
        cout<<head ->val<< " ";
        head = head->next;
    }
    cout<<endl;

}

void deleteMid(Node *head , int n)
{
     if(head == NULL)
        return ;
    if(head ->next == NULL)
    {
        head = NULL;
    }
    Node * cur  = head;
    Node *prev ;
    for(int i= 0;i<n;i++)
    {
        prev= cur;
        cur = cur ->next;
    }
    prev ->next = cur ->next;
}
int main(){

    Node *head = NULL;
    Node *tail = head;
    insertAtHead(head,tail,5);
    insertAtHead(head,tail, 6);
    insertAtHead(head,tail,7);
    insertAtHead(head,tail,8);
    print(head);
    insertAtTail(head, tail , 10);
    insertAtTail(head, tail , 145);
    print(head);
    insertAtMid(head, tail ,15, 5);
    print(head);
    insertAtMid(head, tail ,105, 3);
    print(head);
    deleteAtHead(head);
    print(head);
    deletetail(head);
    print(head);
    deleteMid(head , 3);
    print(head);
    return 0;
}