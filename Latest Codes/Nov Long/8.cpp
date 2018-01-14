#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	  ll a0[10000],a1[10000],a2[10000],a3[10000],i,n,q,t,ans;
	  cin>>n;
	  for(i=0;i<n;i++)
	  cin>>a0[i]>>a1[i]>>a2[i]>>a3[i];
	  cin>>q;
	  while(q--)
	  {
	    ans=-1;
	    for(i=0;i<n;i++)
	    ans=max(ans,a0[i]+t*a1[i]+t*t*a2[i]+t*t*t*a3[i]);
        cout<<ans<<"\n";
	  }

	}
	return 0;
}