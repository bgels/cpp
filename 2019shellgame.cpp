#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int x; cin >> x;

    vector<int> shell(3);
    vector<int> counter(3); 
    for(int i = 0; i < 3; i++){shell[i] = i;}
    for(int i = 0; i < x; i++){
        int a, b, g; cin >> a >> b >> g;
        a--;
        b--;
        g--;

        swap(shell[a], shell[b]);
        counter[shell[g]]++;

    }
    cout << max({counter[0], counter[1], counter[2]});

 return 0;
 }