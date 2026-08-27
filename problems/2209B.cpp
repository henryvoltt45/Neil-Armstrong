#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            int sml = 0;
            int grt; 0;

            for(int j = i + 1; j < n; j++){
                if(a[j] < a[i]) sml++;
                else if (a[j] > a[i]) grt++;
            }
            cout << max(sml, grt);
            if(i + 1 != n) cout << ' ';
        }
        cout << endl;
    }
    return 0;
}