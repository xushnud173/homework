#include <iostream>
using namespace std;
int main() {
    char sex;
    float height;
    cout << "what is ypur sex?\n";
    cin >> sex;
    cout << "what is your height?\n";
    cin >> height;
    if ( sex == 'M' && height < 1.70) {
        cout << "short";
    }else if (sex == 'M' && height >= 1.70 && height < 1.85) {
        cout << "normal";
    }else if (sex == 'M' && height >= 1.85 ) {
        cout << "tall";
    }else if (sex == 'F' &&  height < 1.60) {
        cout << "short";
    }else if (sex == 'F' && height >= 1.60 && height < 1.75) {
        cout << "normal";
    }else {
        cout << "tall";
    }
    return 0;
}