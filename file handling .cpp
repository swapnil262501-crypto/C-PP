#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("test.txt");
    fout << "Hello, this is a test file.\n";
    fout.close();

    ifstream fin("test.txt");
    string line;
    while(getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
    return 0;
}
