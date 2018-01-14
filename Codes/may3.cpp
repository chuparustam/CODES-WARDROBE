#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
lli powermod(lli b,lli e,lli mod)
{
	if(e==1)
	return b;

	lli p=powermod(b,e/2,mod);
	if(e%2)
	return (((p*p)%mod)*(b%mod))%mod;
	else
	return ((p%mod)*(p%mod))%mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	lli t,p,a,b,i;
	cin>>t;
	while(t--)
	{
       lli k=0,ans[11];
       cin>>p>>a>>b;
       if(p!=1)
       a=a%(p-1);
       for(i=0;i<p;i++)
       {
         if(powermod(i,a,p)==powermod(i+b,a,p))
         ans[k++]=i;
         if(k==10)
         break;
       }
       cout<<k<<"\n";
       for(i=0;i<k;i++)
       cout<<ans[i]<<" ";  
       cout<<"\n";
	}
	return 0;
}