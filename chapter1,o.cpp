#include <iostream>
using namespace std;

int main() {
    int a, b, n; 
	    cin >> a >> b >> n;

    int total_cost_in_kopecks = (a * 100 + b) * n;

    int rubles = total_cost_in_kopecks / 100; 
  
    int kopecks = total_cost_in_kopecks % 100; 

    
    cout << rubles << " " << kopecks << endl;

    return 0;
}
