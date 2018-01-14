#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int N,K,i,mex,mix=0,flag=0;
    int ctr[200001]={0};
    cin>>N>>K;
    for(i=0;i<N;i++)
    {
       int x;
       cin>>x;
       mix=max(mix,x);
       ctr[x]++;
    }
    for(i=0;i<=mix;i++)
    {
       if(ctr[i]==0)
       {
          if(K>0)
          K--;
          else
          {
            mex=i;
            flag=1;
            break;
          }  
       }
    }
    if(!flag)
    mex=mix+1;
    cout<<mex<<"\n";
  }  
  return 0;
}