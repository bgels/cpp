#include <bits/stdc++.h> 
using namespace std;
void solve(){
}
// find the distance from the center row/column which is 3, from some value abs(x - 3)

int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){ //index ranges from 1 to 5 because the output will get weird if we did row or column 0
            int x; cin >> x; //2d array
            if(x == 1){
                cout << abs(i - 3) + abs(j - 3);
            }

        }
    }
 return 0;
 }