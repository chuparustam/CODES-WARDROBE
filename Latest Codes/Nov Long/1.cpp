#include <bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
     string S;
     int A=0,B=0,ctr,i;
     cin>>S;
     int N=S.length();
   
     i=0;
     while(i<N)
     {
       if(S[i]!='A'&&S[i]!='B')
       {
          if(i>0)
          {
            if(S[i-1]=='A')
            {
                ctr=0;
                while(S[i]=='.'&&i<N)
                {
                  i++;
                  ctr++;
                }  
                if(i<N)
                {
                  if(S[i]=='A')
                  A+=ctr; 
                }
            }
            else
            {
                 ctr=0;
                 while(S[i]=='.'&&i<N)
                {
                  i++;
                  ctr++;
                }  
                if(i<N)
                {
                  if(S[i]=='B')
                  B+=ctr; 
                }
            }
          }
          else
          {
            while(S[i]=='.'&&i<N)
            i++;
          }
       }
       else
       {	
         if(S[i]=='A')
         A++;
         if(S[i]=='B')
         B++;
         i++;
       }  
     }
     cout<<A<<" "<<B<<"\n";
   }
   return 0;
}