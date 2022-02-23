// Copyright 2021 NNTU-CS
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a <= b) {
        for (int i = a; i != 0; i--) {
            if (a % i == 0 && b % i == 0) {
                cout << "NOD = " << i << endl;
                break;
            }
        }
    } else {
        for (int i = b; i != 0; i--) {
            if (a % i == 0 && b % i == 0) {
                cout << "NOD = " << i << endl;
                break;
            }
        }
    }
    return 1;
}
