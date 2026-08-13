#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        if(b % 3 == 1 && c < 2 ){
            cout << -1 << endl;
        }
        if(b % 3 == 2 && c < 1){
            cout << -1 << endl;
        }
        long long total = a + (b + c + 2) / 3;
        cout << total << endl;
    }
    return 0;
}