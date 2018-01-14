#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long int LL;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	LL t;
	cin>>t;
	while(t--)
	{
	    LL n,m,i,j,type,l,r,A[100000]={0},mptype[100001],comctr[100001];
	    map < LL , pair< LL , LL > > mp;
	    cin>>n>>m;
	    for(i=1;i<=m;i++)
	    {
          cin>>type>>l>>r;
          mptype[i]=type;
          if(t==1)
          {
            comctr[i]=1; mp.insert(make_pair(i,make_pair(l,r)));
          }
          else
          {
            comctr[i]=1; mp.insert(make_pair(i,make_pair(l,r)));
          }
	    }
        for(i=m;i>0;i--)
        {
            if(mptype[i]==2)
            {
               l=mp[i].first; r=mp[i].second;
               for(j=l;j<=r;j++)
               comctr[j]=(comctr[j]%MOD+comctr[i]%MOD)%MOD;
            }
        }
        for(i=m;i>0;i--)
        {
            if(mptype[i]==1)
            {
               l=mp[i].first; r=mp[i].second;
               for(j=l;j<=r;j++)
               A[j]=(A[j]%MOD+comctr[i]%MOD)%MOD;
            }
        }
        for(i=1;i<=n;i++)
        cout<<A[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}