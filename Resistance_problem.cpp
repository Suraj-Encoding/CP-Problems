// # Resistance Problem
#include <iostream>
#include <string.h>
using namespace std;

int len = 0, top = -1;
float *stack;

// # Empty
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

// # Full
int isFull(int len)
{
    if (top == len - 1)
        return 1;
    else
        return 0;
}

// # Push
void push(float val)
{
    if (isFull(len))
    {
        cout << "Stack Overflow! Cannot push " << val << " to the stack " << endl;
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

// # Pop
float pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow! Cannot pop from the stack" << endl;
    }
    else
    {
        float val = stack[top];
        top--;
        return val;
    }
    return 0;
}

float solution(float val, char ch)
{
    float r1, r2, R, res;
    R = r1 = r2 = res = 0;
    while (val)
    {
        if (ch == 'p' | ch == 'P')
        {
            r1 = (r1 + 1 / pop());
        }
        else
        {
            r2 = r2 + pop();
        }
        val--;
    }
    if (ch == 'p' | ch == 'P')
    {
        res = 1 / r1;
        return res;
    }
    else
    {
        return r2;
    }
}

float Resistance(char arr[])
{

    float val, res;
    while (arr[len] != '\0')
    {
        len++;
    }
    stack = new float[len];
    for (int i = len - 1; i >= 0; i--)
    {
        if (arr[i] == 's' | arr[i] == 'p' | arr[i] == 'S' | arr[i] == 'P')
        {
            val = pop();
            res = solution(val, arr[i]);
            push(res);
        }
        else
        {
            push(arr[i] - '0');
        }
    }
    return res;
}

int main()
{
    int T;
    float R;
    char Input[20];
    cout << "\n# Resistance Problem #\n";
    cout << "Test Cases: ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Enter Input expression: " << endl;
        cin >> Input;
        R = Resistance(Input);
        cout << "Equivalent Resistance: " << R << endl;
    }
    return 0;
}