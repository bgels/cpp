#include <bits/stdc++.h> 
using namespace std;
void solve(){
}
int main(){
    int size; cin >> size;
    int numbers[size];

    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }
    sort(numbers, numbers + size);

    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }

 return 0;
 }