#include <bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
      int N,P,i;
      int cw=0,hrd=0;
      cin>>N>>P;
      for(i=0;i<N;i++)
      {
        int prt;
        cin>>prt;
        if(prt>=(P/2))
        cw++;
        else if(prt<=(P/10))
        hrd++;
      }
      if(cw==1&&hrd==2)
      cout<<"yes";
      else
      cout<<"no";
      cout<<"\n";
   }
   return 0;
}