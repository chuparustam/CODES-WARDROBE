#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
     string S;
     int x,y,Nf=0,Ns=0,i,j,t,A,B;
     char f='a',s='b';

     cin>>S;
     cin>>x>>y;

     int N=S.length();
     for(i=0;i<N;i++)
     {
        if(S[i]=='a')
        Nf++;
        else
        Ns++;
     }
     
     if((Nf/x)<(Ns/y))
     {
       f='b';
       s='a';

       t=y;
       y=x;
       x=t;

       t=Nf;
       Nf=Ns;
       Ns=t;

       A=Nf;
       B=Ns;
     }

     int M=min(Na/x,Nb/y);
     for( i=0; i<M; i++ )
     {
        for(j=0;j<x;j++)
        cout<<f;
        for(j=0;j<y;j++)
        cout<<s;
     }
     for(j=0;j<x;j++)
     cout<<f;

     

  }	
  return 0;
}