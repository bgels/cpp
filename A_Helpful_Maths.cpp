#include <bits/stdc++.h> 
using namespace std;
void solve(){
}
int main(){
    int array[7]; //creates array, we know that it takes 7 ints as input
    for (int i = 0; i < 7; i++){
        cin >> array[i];
    } //puts inputs into the array

    sort(array, array + 7); //sort the array in ascending order, small to large

    int a = array[0];
    int b = array[1];
    int c = array[6] - a - b;

    cout << a << " " << b << " " << c;

 return 0;
 }