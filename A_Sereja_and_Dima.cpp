#include <bits/stdc++.h> 
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++) {
        cin >> v[i];
    }

    int a = 0, b = 0;

    while (!v.empty()) {
        if (v.front() > v.back()) {
            a += v.front();
            v.erase(v.begin());
        }else {
            a += v.back();
            v.pop_back();
        }
        if (!v.empty()) {
            if (v.front() > v.back()) {
                b += v.front();
                v.erase(v.begin());
            }else{
                b += v.back();
                v.pop_back();
            }
        }
    }

    cout << a << " " << b;

    return 0;
}
