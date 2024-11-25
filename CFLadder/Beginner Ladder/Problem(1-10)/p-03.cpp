#include <iostream>
#include <vector>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;  
        
        int maxHook = (n + 1) / 2;  
        if(k > maxHook) {
            cout << -1 << endl;  
        } 
        else {
            
            vector< vector<char> > vec(n, vector<char>(n, '.'));

            
            int rooksPlaced = 0;
            for(int i = 0; i < n && rooksPlaced < k; i += 2) {
                vec[i][i] = 'R';
                rooksPlaced++;
            }

            
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cout << vec[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}
