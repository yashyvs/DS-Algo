#include <bits/stdc++.h>
using namespace std;


void reverse(vector<int> &v, int l, int r) {

    if (l > r) {
        return;
    }
    swap(v[l], v[r]);
    reverse(v, l + 1, r - 1);
}

int main() {

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    reverse(v, 0, v.size() - 1);

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
}
