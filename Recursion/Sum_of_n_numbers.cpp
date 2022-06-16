#include <bits/stdc++.h>
using namespace std;


// using parameterised recursion

int sum = 0;

void printSum1(int n) {
    if (n == 0) {
        cout << sum;
        return;
    }
    sum += n;
    printSum1(n - 1);
}




// using functional recursion

int printSum2(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n + printSum2(n - 1);
    }
}




int main() {

    int n;
    cin >> n;
    printSum1(n);
    cout << "\n";
    cout << printSum2(n);

}
