#include <iostream>
#include <stdlib.h>
#include <math.h>

#define size 5
using namespace std;

int queue[size];
int front = 0;
int rear = 0;
int element;

int isEmpty()
{
    if (front == rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (rear == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue()
{
    if (isFull())
    {
        cout << "The queue is full" << endl;
    }
    else
    {
        cout << "Enter your element: ";
        cin >> element;
        queue[rear++] = element;
        cout << "one data " << element <<" is Enqueued succesfully" << endl;
    }
    cout << endl;
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "There is no data aviable in queque" << endl;
    }
    else
    {
        cout << "one data " << queue[front] << " dequeue succefully" << endl;
        for (int i = 0; i < rear; i++)
        {
            queue[i] = queue[i + 1];
        }
        rear--;
        cout << endl;
    }
}

void traverse()
{
    if (isEmpty())
    {
        cout << "No data to traverse" << endl;
    }
    else
    {
        cout << "---=Data is traveresing=------" << endl;
        for (int i = front; i < rear; i++)
        {
            cout << queue[i] << "   ";
        }
        cout << endl;
    }
}

int peek()
{
    if (isEmpty())
    {
        return 1;
    }
    else
    {
        return queue[front];
    }
}

int main()
{

    while (1)
    {
        int choice, item;
        cout << "1 for Enqueue" << endl;
        cout << "2 for Dequeue" << endl;
        cout << "3 for Traverse" << endl;
        cout << "4 for Peek" << endl;
        cout << "5 Exit the programme" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            item = peek();
            if (item == 1)
            {
                cout << "the queue is underflow" << endl;
            }
            else
            {
                cout << "The current data is : " << item << endl;
            }
            break;
        case 5:
            exit(1);
            break;
        default:
            cout << "Enter is Invalid" << endl;
        }
    }
    
}