#include <iostream>
#include <cmath>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    
    int t;  
    cin>>t;
    while (t--) {
        int l1, l2, l3;
        cin >> l1 >> l2 >> l3;
        if ((l1 == l2 && l3 % 2 == 0) || 
            (l1 == l3 && l2 % 2 == 0) || 
            (l2 == l3 && l1 % 2 == 0)) 
            {
            cout << "YES" << endl;
        }
        // Check if we can break one of the sticks into two equal halves
        else if (l1 + l2 == l3 || l1 + l3 == l2 || l2 + l3 == l1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}