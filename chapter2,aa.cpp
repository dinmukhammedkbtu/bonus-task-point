#include <iostream>
using namespace std;

int main() {
    long long M, N, x, y;
    cin >> M >> N >> x >> y;

    if (x > 1) {
        cout << x - 1 << " " << y << endl;
    }
    
    
    if (x < M) {
        cout << x + 1 << " " << y << endl;
    }
    
  
    if (y > 1) {
        cout << x << " " << y - 1 << endl;
    }
    
    
    if (y < N) {
        cout << x << " " << y + 1 << endl;
    }

    return 0;
}

