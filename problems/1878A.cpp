#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        bool m = false;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == k) m = true;
        }
        if(m){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}