#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s;cin>>s;
    string result;
    for(int i = 0; i <s.size(); i++){
        if( s[i] != '+'){
            result.push_back(s[i]); 
        }
    }

    sort(result.begin(), result.end());
    cout << result[0];
    for(int i = 1; i <result.size(); i++){
        cout << "+" << result[i];


    }


}
