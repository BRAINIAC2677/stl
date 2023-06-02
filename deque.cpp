#include <iostream>
#include <deque>
using namespace std;

template <class T>
void print_deque(deque<T> dq)
{
    for (auto e : dq)
    {
        cout << e << " ";
    }
    cout << "\n";
}

int main()
{
    // default constructor
    deque<int> dq1;

    // list initializer constructor
    deque<int> dq2{4, 2, 5, 3};

    // copy constructor
    deque<int> dq3(dq2);

    // through iterator
    deque<int> dq4(dq3.begin(), dq3.begin() + 3);

    // init with same element
    deque<string> dq5(4, "Asif");

    print_deque<string>(dq5);

    // print_deque<int>(dq4);

    // iterator
    for (auto it = dq4.begin(); it != dq4.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto it = dq4.rbegin(); it != dq4.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // useful operations
    cout << "is empty: " << dq4.empty() << "\n";
    cout << "size: " << dq4.size() << "\n";
    dq4.push_front(10);
    cout << "front: " << dq4.front() << "\n";
    dq4.pop_front();
    dq4.push_back(10);
    cout << "back: " << dq4.back() << "\n";
    dq4.pop_back();
    cout << "[] access: " << dq4[1] << "\n";
    dq4.clear();

    return 0;
}