#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mn = 10e9;
        int mx = -1;

        for(int i = 0; i < n; i++){
            int h;
            cin >> h;
            mn = min(mn, h);
            mx = max(mx, h);
        }
        cout << mx - mn + 1 << endl;
    }
    return 0;
}