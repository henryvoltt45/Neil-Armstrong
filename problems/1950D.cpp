#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> binaryDecimals;
unordered_map<int, bool> dp;

bool isBinaryDecimal(int x) {
    while (x > 0) {
        int d = x % 10;
        if (d != 0 && d != 1)
            return false;
        x /= 10;
    }
    return true;
}

bool dfs(int x) {
    if (x == 1)
        return true;

    if (dp.count(x))
        return dp[x];

    for (int b : binaryDecimals) {
        if (b == 1) continue;
        if (x % b == 0) {
            if (dfs(x / b))
                return dp[x] = true;
        }
    }

    return dp[x] = false;
}

int main() {
    for (int i = 1; i <= 100000; i++) {
        if (isBinaryDecimal(i))
            binaryDecimals.push_back(i);
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << (dfs(n) ? "YES" : "NO") << '\n';
    }

    return 0;
}