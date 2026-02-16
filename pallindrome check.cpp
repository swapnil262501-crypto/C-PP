#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter word: ";
    cin >> s;
    string rev(s.rbegin(), s.rend());
    cout << (s==rev ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}
