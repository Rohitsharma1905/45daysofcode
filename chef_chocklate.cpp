#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int C, X, Y;
        cin >> C >> X >> Y;
        
        int additional_chocolates = C - X;
        long long cost = additional_chocolates * Y;
        
        cout << cost << endl;
    }
    
    return 0;
}
