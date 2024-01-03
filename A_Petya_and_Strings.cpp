#include <bits/stdc++.h> 
using namespace std;

void solve(){
}

string toLower(const string& input){
    string result = input;

    for(char &c : result){
        c = tolower(c);

    }

    return result;
}

// 
int main(){
    string x; cin>> x;
    string y; cin>> y;

    x = toLower(x);
    y = toLower(y);

    if (x < y){
        cout << "-1";
    } else if (y < x){
        cout << "1";

    } else if (x == y){
        cout << "0";
    }


    

    
 return 0;


 }