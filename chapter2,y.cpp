#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    int min1 = 0, min10 = 0, min60 = 0;
    int cost = 0;

    
    min60 = n / 60;
    n = n % 60;  

    
    min10 = n / 10;
    n = n % 10; 

    
    min1 = n; 

    
    if (min1 * 15 > 125) {
        min10++;
        min1 = 0;
    }

    
    if (min10 * 125 + min1 * 15 > 440) {
        min60++;
        min10 = 0;
        min1 = 0;
    }

    
    cout << min1 << " " << min10 << " " << min60 << endl;

    return 0;
}
