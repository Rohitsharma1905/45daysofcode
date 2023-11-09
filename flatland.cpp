#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s=sqrt(n);
        int ans=2*s-1;
        if(s*s==n)
            cout<<ans<<endl;
        else if(n-s*s<=s)
            cout<<ans<<endl;
        else
            cout<<ans+1<<endl;
    }
    return 0;
}
