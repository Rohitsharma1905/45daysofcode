#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	int no_Of_Steps = 0;
	while(T--)
	{
	    int X, Y;
	    cin >> X >> Y;
	    if(X > Y)                                                                
	    {
	        int desiredSteps = X;                                   // 8
	        int stepsMoveBy_Y = (X/Y);                              // (8/3) = 2
	        int stepsCouldClimb = Y*stepsMoveBy_Y;                  // 3*2 = 6
	        int stepsMoveBy_1 = desiredSteps-stepsCouldClimb;       // 8-6 = 2
	        no_Of_Steps = stepsMoveBy_Y + stepsMoveBy_1;            // 2+2 = 4
	    }
	    else if(X < Y)
	        no_Of_Steps = X;
	    else
	        no_Of_Steps = 1;
	    cout << no_Of_Steps << endl;
	}
	return 0;
}
