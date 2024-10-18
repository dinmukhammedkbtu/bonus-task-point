#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    bool hasEven = false;   
    bool hasOdd = false;    

    
    if (A % 2 == 0) {
        hasEven = true;
    } else {
        hasOdd = true;
    }

    if (B % 2 == 0) {
        hasEven = true;
    } else {
        hasOdd = true;
    }

    if (C % 2 == 0) {
        hasEven = true;
    } else {
        hasOdd = true;
    }

   
    if (hasEven && hasOdd) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

