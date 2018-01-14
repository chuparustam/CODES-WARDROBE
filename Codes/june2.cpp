#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   unsigned long long int U,V,ans;
	   cin>>U>>V;
       ans=((U+V)*(U+V+1))/2+U+1;
       cout<<ans<<"\n"; 
	}
	return 0;
}