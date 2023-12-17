#include <iostream>
#include <algorithm>
using namespace std;
void solve(){
}
int main(){
  
  int friends, fence; cin >> friends >> fence;
  int heights[friends];
  int output = 0;

  for(int i = 0; i < friends; i++){
    cin >> heights[i];
  }

  for(int i = 0; i < friends; i++){
    if(heights[i] > fence){
      output += 2;
    }else{
      output += 1;
    }
    }
  cout << output;
  }