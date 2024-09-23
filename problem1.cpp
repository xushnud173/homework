#include <iostream>
using namespace std;
int main(){
     long long int number;
    cout << "Please enter a numeber in a range between -3,000,000,000 and 3,000,000,000";
    cin >> number;
    if (number <= 2147483647 && number >= -2147483647) {
        cout << "yes";
    }else {
        cout << "no";
    }
    return 0;
}