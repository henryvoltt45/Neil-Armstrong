#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cA = 0;
        int cB = 0;
        for(int i = 0; i < s.size(); i++){
            char A = 'A';
            char B = 'B';
            if(s[i] == A ){
                cA++;
            } else{
                cB++;
            }
        }
        if(cA > cB){
            cout << "A" << endl;
        } else{
            cout << "B" << endl;
        }
    }
    return 0;
}