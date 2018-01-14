#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,n,A[100001],i;
	cin>>T;
	while(T--)
	{
	   cin>>n;
	   int sub=-1;
	   for(i=0;i<n;i++)
	   {	
	     cin>>A[i];
	     sub=max(A[i],sub);
       }
       cout<<n-sub<<"\n";
	}
	return 0;
}