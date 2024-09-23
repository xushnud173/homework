#include <iostream>
using namespace std;
int main() {
    int n1,n2,n3,n4;
    int changes= 0;
    cout << "enter 4 numbers";
    cin >> n1 >> n2 >> n3 >> n4;
    if ( n1 == n2 || n1 == n3 || n1 == n4 ) {
        changes++;
    }if (n2 == n3 || n2 == n4) {
        changes++;
    }if (n3 == n4) {
        changes++;
    }
    cout << changes;
    return 0;
}