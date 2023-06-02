#include <iostream>
#include <vector>
using namespace std;

template <class T>
void print_vector(vector<T> v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << "\n";
}

int main()
{
    // default constructor
    vector<int> v1;

    // list initializer constructor
    vector<int> v2{4, 2, 5, 3};

    // copy constructor
    vector<int> v3(v2);

    // through iterator
    vector<int> v4(v3.begin(), v3.begin() + 3);

    // init with same element
    vector<string> v5(4, "Asif");

    print_vector<string>(v5);

    // iterator
    for (auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto it = v4.rbegin(); it != v4.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // useful operations
    cout << "is empty: " << v4.empty() << "\n";
    cout << "size: " << v4.size() << "\n";
    cout << "front: " << v4.front() << "\n";
    cout << "back: " << v4.back() << "\n";
    v4.push_back(10);
    print_vector<int>(v4);
    v4.pop_back();

    cout << "\nassign:\n";
    v5.assign(2, "Azad");
    print_vector<string>(v5);
    v4.assign(v2.begin(), v2.end() - 2);
    print_vector<int>(v4);
    v4.assign({1, 2, 3, 4});
    print_vector<int>(v4);

    cout << "\nresize:\n";
    v4.resize(8);
    print_vector<int>(v4);
    v4.resize(10, -1);
    print_vector<int>(v4);
    v4.resize(3);
    print_vector<int>(v4);

    v4.clear();

    return 0;
}