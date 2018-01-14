#include <bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
      int n,m,u,v,i;
      cin>>n>>m;
      for(i=0;i<m;i++)
      cin>>u>>v;
      if((n-2*m)%2==0)
      cout<<"yes";
      else
      cout<<"no";
      cout<<"\n";
   }
   return 0;
}