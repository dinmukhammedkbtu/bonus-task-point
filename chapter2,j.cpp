#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

        if (abs(x2 - x1) <= 1 && abs(y2 - y1) <= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
