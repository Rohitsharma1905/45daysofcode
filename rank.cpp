#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int PA, PB, QA, QB;
        cin >> PA >> PB >> QA >> QB;
        int maxP = max(PA, PB);
        int maxQ = max(QA, QB);
        if(maxP < maxQ) {
            cout << "P" << endl;
        } else if(maxQ < maxP) {
            cout << "Q" << endl;
        } else {
            cout << "TIE" << endl;
        }
    }
    return 0;
}
