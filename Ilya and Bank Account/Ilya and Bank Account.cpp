#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int case1, case2;

    if (n >= 0) {
        cout << n;
    } else {
        case1 = n / 10;

        int last = n % 10;
        int first = n / 100;
        case2 = first * 10 + last;

        if (case1 > case2) {
            cout << case1;
        } else {
            cout << case2;
        }
    }

    return 0;
}
