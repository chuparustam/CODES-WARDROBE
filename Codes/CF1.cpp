#include <bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
  LL l,r,x,y,k,f=0,i,K;
  cin>>l>>r>>x>>y>>k;
  for(i=x;i<=y;i++)
  {
  	 K=i*k;
  	 if(K>=l&&K<=r)
  	 {
  	 	f=1;
  	 	break;
  	 }	
  }	
  if(f==1)
  cout<<"YES";
  else
  cout<<"NO";	
  return 0;
}