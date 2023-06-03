#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // constructors
    priority_queue<int> pq1;

    priority_queue<int> pq2{less<int>(), {1, 0, 3}};

    // useful operations
    cout << "is empty: " << pq2.empty() << "\n";
    cout << "size: " << pq2.size() << "\n";
    pq2.push(4);
    cout << "top: " << pq2.top() << "\n";
    pq2.pop();

    return 0;
}