#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> binaryDecimal;
unordered_map<int, bool> dp;

bool isbinarydecimal(int x){
    while(x > 0){
        int d = x % 10;
        if(d != 0 && d != 1)
            return false;
        x /= 10;
    }
    return true;
}

bool dfs(int x){
    if (x == 1)
        return true;
    if(dp.count(x))
        return dp[x];

    for(int b : binaryDecimal){
        if(b == 1) continue;
        if(x % b == 0){
            if(dfs(x / b))
                return dp[x] = true;
        }
    }
    return dp[x] = false;
}

int main(){
    for(int i = 0; i <= 100000; i++){
        if(isbinarydecimal(i))
            binaryDecimal.push_back(i);
    }
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cout << (dfs(n) ? "YES" : "NO") << endl;
    }
    return 0;
}

