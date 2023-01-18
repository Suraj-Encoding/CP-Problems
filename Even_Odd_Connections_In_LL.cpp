// # Even-Odd connections in linked list
// # first odd positions then even positions
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
} *head, *newnode, *temp;

void create()
{
    int ch;
    while (1)
    {
        newnode = new node;
        cout << "\nEnter data: ";
        cin >> newnode->data;
        newnode->next = NULL;
        if (head == NULL)
            head = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "\nWant to continue?[0/1]: ";
        cin >> ch;
        if (ch == 0)
            break;
    }
}

void display()
{
    cout << "\nDisplay:\n";
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void connection()
{
    node *odd, *even, *store;
    odd = head;
    even = head->next;
    store = even;
    while (even->next != NULL)
    {
        temp = even->next;
        odd->next = temp;
        even->next = temp->next;
        if (even->next != NULL)
            even = even->next;
        odd = odd->next;
    }
    odd->next = store;
}

int main()
{
    head = NULL;
    create();
    display();
    connection();
    display();
    return 0;
}