// # Remove Linked List Elements
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * head, *temp, *del, *ptr, *newnode;

void Create();
void Display();
void Sort();

int main()
{
    head = NULL;
    Create();
    Sort();
    Display();
    return 0;
}

void Create()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    while (n)
    {
        newnode = new (nothrow) struct node;
        cin >> newnode->data;
        newnode->next = NULL;

        // linking nodes
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        n--;
    }
}

void Display()
{
    if (head == NULL)
    {
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

void Sort()
{
    int val, flag;
    cin >> val;
    temp = head;
    ptr = NULL;
    while (temp != NULL)
    {
        flag = 0;
        if (temp->data == val)
        {
            if (head == temp)
            {
                head = temp->next;
            }
            ptr->next = temp->next;
            flag = 1;
        }
        if (flag == 0)
            ptr = temp;
        temp = temp->next;
    }
}