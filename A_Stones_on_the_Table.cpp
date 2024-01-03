#include <bits/stdc++.h> 
using namespace std;


int main(){
    int x, ans = 0; cin >> x;
    string y; cin >> y;

    for(int i = 0; i<y.length()-1;i++){
        if(y[i] == y[i+ 1]){
            ans++;
            
        }
    }
    cout << ans;
 return 0;
 }

