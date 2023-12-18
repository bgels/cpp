#include <bits/stdc++.h> 
using namespace std;
void solve(){
}

int main(){
    int lim; int bob; cin >> lim >> bob;
    int result = 0;

    while (lim <= bob){
        lim *= 3;
        bob *= 2;
        result++;
    }
    cout << result;



 return 0;
 }