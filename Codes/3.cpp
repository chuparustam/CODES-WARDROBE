#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll func(ll N,ll B,ll x)
{
  if(x>N)
  return 0;  
  ll ans=((N-x)/B)*x;
  return ans;
}  
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
     ll N,B,ans=0;
     cin>>N>>B;
     if(B==1)
     ans=(N/2)*((N/2)+N%2);
     else
     ans=func(N,B,N/B+(N-N/B)%B);
     cout<<ans<<"\n";
   }
   return 0;
}