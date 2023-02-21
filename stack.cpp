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
void insertAtHead(Node* &head, int val)
{
    Node *temp = new Node(val);
    if(head == NULL)
    {
        head = temp ;
        return;
    }
    temp ->next = head;
    head = temp;
}



class Stack{
    Node *head ;
public: 
    Stack()
    {
        head = NULL;
    }
    void push(int n)
    {
        insertAtHead(head , n);
    }
    void pop()
    {
        if(head == NULL)
        {
            cout<<"underflow"<<endl;
            return;
        }
        head = head ->next;
    }
    int top(){
        return head->val;
    }
    void display(){
        Node* temp = head;
        while(temp !=NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};


int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();
    st.pop();
    st.display();

    return 0;
}