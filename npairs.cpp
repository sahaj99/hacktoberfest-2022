#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    map<int,int>m1,m2;
	    for(int i=0;i<n;i++)
	    {
	        int temp=s[i]-'0';
	        m1[temp-i]++;
	        m2[temp+i]++;
	    }
	    for(auto e:m1)
	    {
	        int ind=e.second;
	        count+=ind*(ind-1)/2;
	    }
	     for(auto e:m2)
	    {
	        int ind=e.second;
	        count+=ind*(ind-1)/2;
	    }
	    
	    cout<<count<<"\n";
	}
	return 0;
}
