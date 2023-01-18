// # Check Pallindrom for linked list
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
} *head, *newnode, *temp, *tail;

int create()
{
    int ch, n = 0;
    while (1)
    {
        n++;
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
    return n;
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

void reverse(int n)
{
    node *current, *prevnode, *nextnode;
    temp = head;
    if (n % 2 == 0)
        n--;
    for (int i = 0; i < n / 2; i++)
        temp = temp->next;
    prevnode = temp;
    current = nextnode = temp->next;
    while (nextnode != NULL)
    {
        nextnode = current->next;
        current->next = prevnode;
        prevnode = current;
        current = nextnode;
    }
    tail = prevnode;
}

int pallindrom(int n)
{
    temp = head;
    int f;
    if (n % 2 == 0)
        n--;
    for (int i = 0; i <= n / 2; i++)
    {
        if (temp->data == tail->data)
            f = 1;
        else
        {
            f = 0;
            break;
        }
        temp = temp->next;
        tail = tail->next;
    }
    return f;
}

void Reverse_Original(int n)
{
    node *current, *prevnode, *nextnode;
    if (n % 2 == 0)
        n--;
    prevnode = NULL;
    current = nextnode = tail;
    for (int i = 0; i < n / 2; i++)
    {
        nextnode = current->next;
        current->next = prevnode;
        prevnode = current;
        current = nextnode;
    }
}

int main()
{
    head = NULL;
    int n = create();
    display();
    reverse(n);
    int res = pallindrom(n);
    if (res)
        cout << "\nPallindrom...\n";
    else
        cout << "\nNot Pallindrom..\n";
    Reverse_Original(n);
    display();
    return 0;
}