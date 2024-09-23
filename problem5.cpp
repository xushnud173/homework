#include <iostream>
using namespace std;
int main() {
    int a,b;
    char symbol;
    cout << "enter the expression";
    cin >> a >> symbol >> b;
    if (symbol == '+') {
        cout << a+b;
    }else if (symbol == '-') {
        cout << a-b;
    }else if (symbol == '*') {
        cout << a*b;
    }else if (symbol == '/') {
        cout << a/b;
    }else {
        cout << "xatolik";
    }
    return 0;
}