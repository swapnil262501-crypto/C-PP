#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<string> names(n);
    vector<int> grades(n);
    int sum = 0;

    for(int i=0; i<n; i++) {
        cout << "Enter name and grade: ";
        cin >> names[i] >> grades[i];
        sum += grades[i];
    }

    cout << "\nClass Average: " << (double)sum/n << endl;
    return 0;
}
