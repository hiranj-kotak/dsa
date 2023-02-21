#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node()
    {
        val = 0;
        next = NULL;
    }
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};
void insert_front(Node *&head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}
void insert_end(Node *&head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    Node *cur = head;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = temp;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    display(head);
    insert_front(head, 1);
    display(head);
    insert_front(head, 2);
    display(head);
    insert_front(head, 5);
    display(head);
    insert_end(head, 10);
    display(head);
    insert_end(head, 15);
    display(head);

    return 0;
}