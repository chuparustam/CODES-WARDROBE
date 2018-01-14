#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;
#define MOD 1000000007
int main()
{
  LL t;
  cin>>t;
  while(t--)
  {
    LL arr[100005]={0},res[100005]={0};
    LL n,m,i,val=0;
    vector < pair < LL , pair < LL , LL > > > v(100002);
    cin>>n>>m;
    for(i=1;i<=m;i++)
    cin>>v[i].first>>v[i].second.first>>v[i].second.second;
    for(LL i=m;i>=1;i--)
    {
      val+=arr[i];
      if(v[i].first==2)
      {
        int a=v[i].second.first,b=v[i].second.second;
        arr[b]=(arr[b]+(val+1))%MOD;
        arr[a-1]=(arr[a-1]+MOD-(val+1))%MOD;
      }
    }

    for(i=m-1;i>=0;i--)
    arr[i]=(arr[i]%MOD+arr[i+1]%MOD)%MOD;

    for(i=1;i<=m;i++)
    {
      if(v[i].first==1)
      {
        res[v[i].second.first]=(res[v[i].second.first]%MOD+arr[i]%MOD+1)%MOD;
        res[v[i].second.second+1]=(res[v[i].second.second+1]%MOD+MOD-(arr[i]+1))%MOD;
      }
    }
    cout<<res[1]<<" ";
    for(i=2;i<=n;i++)
    {
      res[i]=(res[i]%MOD+res[i-1]%MOD)%MOD;     
      cout<<res[i]<<" ";
    }
    cout<<"\n"; 
  }
  return 0;
}