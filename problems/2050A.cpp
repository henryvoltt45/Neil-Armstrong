#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int ans = a[n - 1];
        
        for(int i = 0; i < n - 1; i++){
            ans += max(0, a[i] - b [1 + i]);
        }
        cout << ans << endl;
    }
    return  0;
}