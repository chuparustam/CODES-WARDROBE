#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,A[100000],ans=0;
    map < int , int > mp;
    map < int , int >::iterator it;
    
    cin>>N;
    for(i=0;i<N;i++)
    cin>>A[i];
    
    for(i=0;i<N;i++)
    {
      if(mp.find(A[i]-1)!=mp.end())
      mp[A[i]]=mp[A[i]-1];
      else
      mp[A[i]]=A[i];
    }

    for(it=mp.begin();it!=mp.end();++it)
    ans=max(ans,(it->first)-(it->second)+1);
    cout<<ans;
    
	return 0;
}