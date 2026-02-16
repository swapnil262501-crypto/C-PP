#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    Point p = {10, 20};
    cout << "Point: (" << p.x << "," << p.y << ")";
    return 0;
}
