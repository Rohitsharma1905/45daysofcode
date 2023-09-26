#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int x,y;
	    cin>>x>>y;
	    
	    if(x<y){
	      cout<<(y-1)/x<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	    t--;
	}
	return 0;
}
