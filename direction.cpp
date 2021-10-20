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
	    size_t found = s.find("LL");
         size_t found1 = s.find("RR");
        if (found1 != string::npos || found!=string::npos)
        cout << "YES"<< endl;
        else 
	    cout<<"NO"<<"\n";
	}
	return 0;
}
