#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
}
int main(){
    int games; cin >> games;
    string result; cin >> result;
    int a = 0; int b = 0;
    string output;

    for(int i = 0; i < result.size(); i++){
        if(result[i] == 'A'){
            a+= 1;
        }
        if(result[i] == 'D'){
            b+= 1;
        }
    }


    if(a > b){
        cout << "Anton";
    }else if (a < b)
    {
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
    



    
 return 0;
 }