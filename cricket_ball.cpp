#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,m,n;
//	cout<<"enter the no. of test cases:";
	cin>>t;
	while(t--){
	 //   cout<<"enter the no. of runs to win:";
	    cin>>m;
	   // cout<<"enter the no. of overs left:";
	    cin>>n;
	    if(m<=36*n){
	        cout<<"yes"<<endl;
	        
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
