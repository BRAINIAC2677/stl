#include <iostream>
#include <deque>
#include <stack>
using namespace std;

int main()
{
    // default constructor
    stack<int> st1;

    // list initializer constructor
    deque<int> dq1{3, 4, 1};
    stack<int> st2(dq1);

    // copy constructor
    stack<int> st3(st2);

    // useful operations
    cout << "is empty: " << st3.empty() << "\n";
    cout << "size: " << st3.size() << "\n";
    cout << "top: " << st3.top() << "\n";
    st3.push(5);
    st3.pop();

    return 0;
}