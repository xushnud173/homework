#include <iostream>
using namespace std;
int main() {
int winter,rain;
    cin >> winter >> rain;
    if (winter == true ) {
        cout << "bus";
    }else if (rain == true ) {
        cout << "walk";
    }else {
        cout << "bike";
    }
    return 0;
}