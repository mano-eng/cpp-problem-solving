#include <iostream>
using namespace std;

int main() {
    int X[100];

    // إدخال 100 عنصر
    for(int i = 0; i < 100; i++) {
        cin >> X[i];
    }

    // عدد السوالب
    int count = 0;
    for(int i = 0; i < 100; i++) {
        if(X[i] < 0) {
            count++;
        }
    }

    // مجموع آخر 3 سالب
    int sum = 0;
    int temp = 0;

    for(int i = 99; i >= 0; i--) {
        if(X[i] < 0) {
            sum += X[i];
            temp++;

            if(temp == 3) {
                break;
            }
        }
    }

    // طباعة
    cout << "Negative count = " << count << endl;
    cout << "Sum last 3 negatives = " << sum << endl;

    return 0;
}