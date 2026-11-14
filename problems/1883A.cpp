#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = 0;
        int current = 1;

        for (int i = 0; i < 4; i++) {
            int digit = s[i] - '0';

            if (digit == 0) {
                digit = 10;
            }

            ans += abs(digit - current) + 1;
            current = digit;
        }

        cout << ans << '\n';
    }

    return 0;
}
