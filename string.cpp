#include <iostream>
#include <string>
using namespace std;

int main()
{
    // constructors
    string s1;
    string s2{"Asif Azad"};
    string s3(s2);
    string s4(4, 'A');
    string s5(s2, 5);    // starting from 5th index to last of s2
    string s6(s2, 5, 3); // starting from 5th index take 3 characters
    string s7(s2.begin(), s2.end() - 1);

    cout << s5 << "\n"
         << s6 << "\n"
         << s7 << "\n";

    // useful operations
    cout << "is empty: " << s2.empty() << "\n";
    cout << "size: " << s2.size() << "\n";
    cout << "front: " << s2.front() << "\n";
    cout << "back: " << s2.back() << "\n";
    cout << "[] operator: " << s2[2] << "\n";
    s2.push_back('j');
    s2.pop_back();

    cout << "substring: " << s2.substr(5) << "\n";
    cout << "substring: " << s2.substr(5, 2) << "\n";

    return 0;
}