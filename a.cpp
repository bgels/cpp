#include <bits/stdc++.h> 
using namespace std;

int main(){
    int x; cin >> x;
    for(int i = 0; i < x; i++){
        int a; cin >> a;
        int sum = 0;

        vector<int> vec;
        string next;
        getline(cin, next);
        istringstream iss(next);

        while(iss >> x){
            vec.push_back(x);
            cout << x;
        }

        for (int i = 0; i < vec.size(); i++){
            cout << vec[i];
            sum += vec[i];
        }
        
    }
 return 0;
 }