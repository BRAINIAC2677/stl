#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    // default constructor
    queue<int> q1;

    // list initializer constructor
    deque<int> dq1{3, 2, 1, 4, 4};
    queue<int> q2(dq1);

    // copy constructor
    queue<int> q3(q2);

    // useful operations
    cout << "is empty: " << q3.empty() << "\n";
    cout << "size: " << q3.size() << "\n";
    cout << "front: " << q3.front() << "\n";
    cout << "back: " << q3.back() << "\n";
    q3.pop();
    q3.push(6);

    return 0;
}