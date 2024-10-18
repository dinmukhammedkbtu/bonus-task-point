#include <iostream>
using namespace std;

int main() {
    int systemAnswer, studentAnswer;
    cin >> systemAnswer >> studentAnswer;

    if (systemAnswer == 1) {
        if (studentAnswer == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        if (studentAnswer != 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

