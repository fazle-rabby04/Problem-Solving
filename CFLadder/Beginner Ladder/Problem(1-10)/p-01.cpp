#include <iostream>
#include <cmath>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

        // Calculate time to reach the row and column
        int time_to_row = (rd >= rb) ? rd - rb : (n - rb) + (n - rd);
        int time_to_col = (cd >= cb) ? cd - cb : (m - cb) + (m - cd);

        // The minimum time is the smaller of both times
        cout << min(time_to_row, time_to_col) << endl;
    }
    
    return 0;
}
