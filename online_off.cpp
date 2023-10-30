#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, M;
        cin >> N >> M;
        N = N - (N * 0.1);
        if(N < M) {
            cout << "ONLINE" << endl;
        } else if(N > M) {
            cout << "DINING" << endl;
        } else {
            cout << "EITHER" << endl;
        }
    }
    return 0;
}
