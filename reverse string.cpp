#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    for(int i=s.size()-1; i>=0; i--) cout << s[i];
    return 0;
}
