#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int> &t)
{

    stack<int> temp;
    while (!t.empty())
    {

        int p = t.top();

        if (!temp.empty())
        {
            int a = temp.top();

            if (p < a)
            {
                temp.pop();
                temp.push(p);
                temp.push(a);
            }
            else
            {
                temp.push(p);
            }
        }
        else
        {
            temp.push(p);
        }
        t.pop();
    }
    while (!temp.empty())
    {
        t.push(temp.top());
        temp.pop();
    }
}

void printSortedStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

void initializeStack(stack<int> &t)
{

    t.push(4);
    t.push(2);
    t.push(1);
    t.push(3);
}

int main()
{
    stack<int> s;
    initializeStack(s);
    sortStack(s);
    printSortedStack(s);
}