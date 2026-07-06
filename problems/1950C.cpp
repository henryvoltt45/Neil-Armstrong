#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int hh = stoi(s.substr(0, 2));
        string mm = s.substr(3, 2);

        string period;

        if (hh == 0) {
            hh = 12;
            period = "AM";
        } else if (hh < 12) {
            period = "AM";
        } else if (hh == 12) {
            period = "PM";
        } else {
            hh -= 12;
            period = "PM";
        }

        cout << setw(2) << setfill('0') << hh << ":" << mm << " " << period << '\n';
    }

    return 0;
}