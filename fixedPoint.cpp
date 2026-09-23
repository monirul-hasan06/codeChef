#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (cin >> T) {
        while (T--) {
            int N, K;
            cin >> N >> K;
            
            if (K == N - 1) {
                cout << "No\n";
            } else {
                cout << "Yes\n";
            }
        }
    }
    
    return 0;
}
