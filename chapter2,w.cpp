#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

   
    if (a + b <= c) {
        cout << "impossible" << endl;
    } else {
       
        int a2 = a * a;
        int b2 = b * b;
        int c2 = c * c;

        if (a2 + b2 == c2) {
            cout << "right" << endl;  
        } else if (a2 + b2 > c2) {
            cout << "acute" << endl;  
        } else {
            cout << "obtuse" << endl;  
        }
    }

    return 0;
}
