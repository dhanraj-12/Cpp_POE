#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Stack
{
private:
    T *arr;
    int top;
    int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    void push(T item)
    {
        if (top == capacity - 1)
        {
            cout << "Stack overflow: Unable to push " << item << endl;
            return;
        }
        arr[++top] = item;
    }
    T pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow: No elements to pop" << endl;
            return T();
        }
        return arr[top--];
    }
    T peek()
    {

        if (top == -1)
        {
            cout << "Stack is empty: No elements to peek" << endl;
            return T();
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    int size()
    {
        return top + 1;
    }
};
int main()
{
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Top element is: " << intStack.peek() << endl;
    cout << "Stack size is: " << intStack.size() << endl;
    cout << "Popped element: " << intStack.pop() << endl;
    cout << "Popped element: " << intStack.pop() << endl;
    cout << "Current size after pops: " << intStack.size() << endl;
    return 0;
}