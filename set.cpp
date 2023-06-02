#include <iostream>
#include <set>
using namespace std;

template <class T>
void print_set(set<T> s)
{
    for (auto e : s)
    {
        cout << e << " ";
    }
    cout << "\n";
}

template <class T, class C>
void print_set(set<T, C> s)
{
    for (auto e : s)
    {
        cout << e << " ";
    }
    cout << "\n";
}

// custom comparator
struct DescendingComp
{
    bool operator()(int a, int b) const
    {
        return a > b;
    }
};

int main()
{
    // default constructor
    set<int> s1;

    // initializer list constructor
    set<int> s2{3, 3, 2, 1};

    // copy constructor
    set<int> s3(s2);

    // custom comparison
    set<int, DescendingComp> s4 = {1, 2, 2, 3};

    // iterators
    for (auto it = s3.begin(); it != s3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto it = s3.rbegin(); it != s3.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // print_set<int, DescendingComp>(s4);

    // useful operations
    cout << "is empty: " << s3.empty() << "\n";
    cout << "size: " << s3.size() << "\n";

    s3.insert(4);
    cout << "count: " << s3.count(4) << "\n";
    if (s3.find(4) != s3.end())
    {
        cout << "find: " << *s3.find(4) << "\n";
    }
    cout << "is contains: " << s3.contains(4) << "\n"; // introduced in c++ 20
    s3.erase(4);

    // returns an iterator to the first element not less than the given key
    if (s3.lower_bound(1) != s3.end())
    {
        cout << "lower bound: " << *s3.lower_bound(1) << "\n";
    }

    // returns an iterator to the first element greater than the given key
    if (s3.upper_bound(1) != s3.end())
    {
        cout << "upper bound: " << *s3.upper_bound(1) << "\n";
    }

    s3.clear(); // linear complexity

    return 0;
}