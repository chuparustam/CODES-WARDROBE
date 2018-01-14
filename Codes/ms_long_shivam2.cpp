#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long int LL;
using namespace std;
int main()
{
  LL T;
  cin>>T;
  while(T--)
  {
    vector < pair < LL , pair < LL , LL > > > V;
    LL A[100005]={0},ans[100005]={0},val=0;
    LL n,m,i,l,r,type;
    cin>>n>>m;

    for(i=1;i<=m;i++)
    {
      cin>>type>>l>>r;
      V.push_back(make_pair(type,make_pair(l,r)));
    }   
    
    for(i=m;i>=1;i--)
    {
      val+=A[i];
      if(V[i].first==2)
      {
        LL a=V[i].second.first;
        LL b=V[i].second.second;
        A[b]=(A[b]%MOD+(val+1)%MOD)%MOD;
        A[a-1]=(A[a-1]%MOD+MOD-(val+1)%MOD)%MOD;
      }
    }

    for(i=m-1;i>=0;i--)
    A[i]=(A[i]%MOD+A[i+1]%MOD)%MOD;

    for(i=1;i<=m;i++)
    {
      if(V[i].first==1)
      {
        LL a=V[i].second.first;
        LL b=V[i].second.second;
        ans[a]=(ans[a]%MOD+A[i]%MOD+1)%MOD;
        ans[b+1]=(ans[b+1]%MOD+MOD-(A[i]+1)%MOD)%MOD;
      }
    }

    cout<<ans[1]<<" ";
    for(i=2;i<=n;i++)
    cout<<(ans[i]=(ans[i]%MOD+ans[i-1]%MOD)%MOD)<<" ";
    cout<<"\n";
  }
  return 0;
}