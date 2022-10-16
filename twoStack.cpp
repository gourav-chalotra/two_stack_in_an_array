#include <iostream>
using namespace std;

class stack1
{

public:
    int top1;
    int top2;
    int size;
    int *arr;
    stack1(int size)
    {
        top1 = -1;
        top2 = size / 2 - 1;
        this->size = size;
        arr = (int *)malloc(sizeof(int) * size);
    }
    void push1(int data)
    {
        if (top1 == size / 2 - 1)
        {
            cout << "Stack is full!\n"
                 << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if (top2 == size - 1)
        {
            cout << "Stack is full!\n";
        }
        else
        {
            top2++;
            arr[top2] = data;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "The stack is Empty!\n";
        }
        else
        {
            int waste = top1;
            cout << "\nThe Pop element is: " << arr[waste] << endl;
            --top1;
        }
    }
    void pop2()
    {
        if (top2 < size / 2)
        {
            cout << "\nThe stack is Empty!\n";
        }
        else
        {
            int waste = top2;
            cout << "\nThe Pop element is: " << arr[waste] << endl;
            --top2;
        }
    }

    void display1()
    {
        int temp = 0;
        while (temp < size / 2)
        {
            cout << "\nThe elements are: " << arr[temp] << endl;
            temp++;
        }
    }
    void display2()
    {
        int temp = size / 2;
        while (temp < size)
        {
            cout << "\nThe elements are: " << arr[temp] << endl;
            temp++;
        }
    }
};

int main()
{
    stack1 s(4);
    s.push1(7);
    s.push1(2);

    s.display1();
    s.push1(56);
    s.push2(23);
    s.push2(256);
    s.display2();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop2();
    s.pop2();
    s.pop2();
}