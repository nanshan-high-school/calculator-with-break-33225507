#include <iostream>
using namespace std;
int main() {
    float total;
    string x;
    cout << "請輸入一個數字:";
    cin >> total;
    for (int i = 0; i < 999999999; i++){
        int number = 0;
        cout << "請輸入+-*/和一個數字或=:";
        cin >> x;
        for (int i = 1; x[i] >= '0'; i++) {
            number = number * 10 + x[i] - 48;
        }
        if (x[0] == '+') {
           total = total + number;
        }
        else if (x[0] == '-') {
                total = total - number;
        }
        else if (x[0] == '*') {
                total = total * number;
        }
        else if (x[0] == '/') {
                total = total / number;
        }
        else if (x[0] == '=') {
           break;
        }
    }
    cout << total;
}
