#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    if((n+1)*y>=x) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	}
	return 0;
}
