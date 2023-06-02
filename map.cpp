#include <iostream>
#include <map>
using namespace std;

template <class K, class V>
void print_map(map<K, V> m)
{
    for (auto p : m)
    {
        cout << p.first << " " << p.second << "\n";
    }
}

int main()
{
    // default constructor
    map<string, int> m1;

    // initializer list constructor
    map<string, int> m2{
        {"Asif", 1905004},
        {"Ashraf", 1905005}};

    // copy constructor
    map<string, int> m3(m2);

    // print_map<string, int>(m3);

    // iterator
    for (auto it = m3.begin(); it != m3.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << "\n";
    }
    cout << "\n";

    for (auto it = m3.rbegin(); it != m3.rend(); it++)
    {
        cout << it->first << " " << it->second << "\n";
    }
    cout << "\n";

    // useful operations
    m3["Nabil"] = 1905006;
    cout << "is empty: " << m3.empty() << "\n";
    cout << "size: " << m3.size() << "\n";

    cout << "count: " << m3.count("Asif") << "\n";
    if (m3.find("Asif") != m3.end())
    {
        cout << "find: " << m3.find("Asif")->second << "\n";
    }

    cout << "is contains: " << m3.contains("Asif") << "\n"; // introduced in c++ 20

    // returns an iterator to the first element not less than the given key
    if (m3.lower_bound("Asif") != m3.end())
    {
        cout << "lower bound: " << m3.lower_bound("Asif")->second << "\n";
    }

    // returns an iterator to the first element greater than the given key
    if (m3.upper_bound("Asif") != m3.end())
    {
        cout << "upper bound: " << m3.upper_bound("Asif")->second << "\n";
    }

    m3.clear(); // linear complexity

    return 0;
}