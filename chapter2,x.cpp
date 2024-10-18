#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

   
    if (n % 100 >= 11 && n % 100 <= 14) {
     
        cout << n << " korov" << endl;
    } else {
        
        int last_digit = n % 10;
        if (last_digit == 1) {
            cout << n << " korova" << endl;
        } else if (last_digit >= 2 && last_digit <= 4) {
            cout << n << " korovy" << endl;
        } else {
            cout << n << " korov" << endl;
        }
    }

    return 0;
}

