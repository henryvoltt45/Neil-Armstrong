#include <iostream>
using namespace std;

void Solve() {
    int n;
    cin >> n;
    int a[15];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    if ((sum - 1) % n == 1) {
        ans++;
    }
    cout << ans << endl;

}
int main() {
    int t;
    cin >> t;

    while(t--) {
        Solve();
    }
}