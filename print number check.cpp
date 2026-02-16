#include <iostream>
using namespace std;

int main() {
    int n, flag=0;
    cout << "Enter number: ";
    cin >> n;
    for(int i=2; i<=n/2; i++) {
        if(n % i == 0) { flag=1; break; }
    }
    cout << (flag==0 ? "Prime" : "Not Prime") << endl;
    return 0;
}
