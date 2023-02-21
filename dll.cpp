#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    Node(int x)
    {
        val = x;
        next = NULL;
        prev = NULL;
    }
};

void insert_at_front(Node *&head, Node *&tail, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insert_at_end(Node *&head, Node *&tail, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void delete_first(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "No node in the list to delete" << endl;
        return;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        return;
    }
    head = head->next;
    head->prev = NULL;
}
void delete_l(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    else if (head == tail)
    {
        head == NULL;
        tail == NULL;
        return;
    }
    tail = tail->prev;
    tail->next = NULL;
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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t != 0)
    {
        if (t == 1)
        {
            int n;
            cin >> n;
            insert_at_front(head, tail, n);
        }
        else if (t == 2)
        {
            int n;
            cin >> n;
            insert_at_end(head, tail, n);
        }
        else if (t == 3)
        {
            delete_first(head, tail);
        }
        else if (t == 4)
        {
            delete_l(head, tail);
        }
        else if (t == 5)
        {
            display(head);
        }
        cin >> t;
    }
    return 0;
}
