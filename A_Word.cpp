#include <bits/stdc++.h> 
using namespace std;


int main(){
    string x; cin >> x;
    int lower=0;
    int upper=0;
    
    for(char c:x){
        if(islower(c)){
            lower ++;
        }else{
            upper ++;
        }
    }

    for(int i = 0; i < x.size(); i++){
        if(upper > lower){
            x[i] = toupper(x[i]);
        }else{
            x[i] = tolower(x[i]);
        }
    }

    for(char y:x){
        cout << y;
    }
    }

