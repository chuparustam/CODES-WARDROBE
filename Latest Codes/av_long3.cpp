#include <bits/stdc++.h>
typedef long int lli;
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
     lli N,i,e,E,mod;
     cin>>N;
     cout<<"2 1 ";
     e=4294967291;
     E=e/(N-2);
     mod=e%(N-2);
     for(i=1;i<=(N-2);i++)
     {	
       if(mod>0)
       cout<<E+1;
       else
       cout<<E;
       cout<<" ";
       if(mod>0)
       mod--;	
     }  
     cout<<"\n";  
   }
   return 0;
}