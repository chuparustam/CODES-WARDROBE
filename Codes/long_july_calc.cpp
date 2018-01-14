#include <bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
     long long int N,B,ans=0,x;
     cin>>N>>B;
     
     if((N/2)<B)
     ans=N-B;
     else
     {	
       x=N/2-1;
       ans=max(ans,((N-x)/B)*x); 
       x=N/2;
       ans=max(ans,((N-x)/B)*x);
       x=N/2+1;
       ans=max(ans,((N-x)/B)*x);
     }
     cout<<ans<<"\n";
   }
   return 0;
}