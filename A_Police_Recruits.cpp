#include <bits/stdc++.h> 
using namespace std;


int main(){
    int x, event;
    int cops =0;
    int ans = 0;

    cin >> x;
    while(x--){ // goes tru every event
        cin >> event; //cins what happens

        cops += event; // adds cops to event, if there are no cops and event is crime 
        if(cops < 0){ //results in untreated++
            ans++;
            cops++; // cops++ so we move on from that event
        }
    }
    cout << ans;
 return 0;
 }