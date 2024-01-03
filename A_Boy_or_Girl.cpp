#include <bits/stdc++.h> 
using namespace std;

int main() {
    std::string x;
    std::cin >> x;
    int result = 0;

    sort(x.begin(), x.end());

    for(int i = 0; i < x.size(); i++){
        if(x[i] == x[i + 1]) {
            // Erase the duplicate character at position i
            x.erase(i, 1);
            --i;
        }
    }

    for (int i = 0; i < x.size(); i++)
    {
        result+=1;
    }
    


    
    if(result%2 == 0){
        cout << "CHAT WITH HER!";
    } else if(result%2 == 1){
        cout << "IGNORE HIM!";
    }

    return 0;
}