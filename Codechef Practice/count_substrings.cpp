#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string s;
	    cin>>s;
	    int i,count=0;
	    for(i=0;i<n;i++)
	    { 
	       if(s[i]=='1')
	       count++;
	    }
	    long long ans=(((long long)count)*(count+1))/2;
	    cout<< ans <<endl;
	}
	return 0;
}
