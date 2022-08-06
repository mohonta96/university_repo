#include <iostream>
using namespace std;
#define size 5

int top = -1;
int stack[size];
int element, ela;

int isFull()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int elament)
{
    if (isFull())
    {
        cout << "Stack is full";
    }
    else
    {
        top++;
        stack[top] = element;
        cout << "1 data succesfully pushed" << endl;
    }
}

int pop()
{
    if (isEmpty())
    {
        return 1;
    }
    else
    {
        return stack[top--];
    }
}

void select()
{
    if (isEmpty())
    {
        cout << "the stack is empty" << endl;
    }
    else
    {
        cout << "the top is now in postion: " << stack[top];
    }
}

void travers()
{
    if (isEmpty())
    {
        cout << "the stack is empty";
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << "Elemnet is: " << stack[i] << endl;
        }
    }
}

int main()
{
    int t = 1, temp;
    while (t--)
    {

        int x;
        cout << "Enter 1.push" << endl;
        cout << "Enter 2.pop" << endl;
        cout << "Enter 3.slect" << endl;
        cout << "Enter 4.traverse" << endl;
        cin >> x;

        switch (x)
        {
        case 1:
            cout << "Enter element for push: ";
            cin >> element;
            push(element);
            break;
        case 2:
            ela = pop();
            if (ela == 0)
            {
                cout << "the stack is underflow" << endl;
            }
            else
            {
                cout << "the element is : " << ela << endl;
            }
            break;
        case 3:
            select();
            break;
        case 4:
            travers();
            break;
        default:
            cout << " Invalid entery ! sorry try agin" << endl;
        }

        cout << "Enter 1 for run agin the program 0 for terminate: ";
        cin >> temp;
        t = temp;
    }
}