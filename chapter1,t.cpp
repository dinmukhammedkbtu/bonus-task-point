#include <iostream>
using namespace std;

int main() {
    int num; 
    cin >> num;

    int a = num / 1000;           
    int b = (num / 100) % 10;     
    int c = (num / 10) % 10;      
    int d = num % 10;             

    
    int result = (a == d) * (b == c); 
    cout << result * 1 + (1 - result) * 37 << endl; 

    return 0;
}
