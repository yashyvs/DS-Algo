#include <bits/stdc++.h>
using namespace std;

int i = 1;

void printN(int n) {
    if (n == 0) {
        return;
    }
    cout << i << "\n";
    i++;
    printN(n - 1);
}



int main() {

    int n;
    cin >> n;
    printN(n);

}
