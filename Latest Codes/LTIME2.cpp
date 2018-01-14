#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
     string S;
     cin>>S;
     int A[100000],N,i,ans=1,idx,sum=0;
     for(i=0;i<N;i++)
     {
       A[i]=(int)(S[i]-'0');
       cout<<A[i];
       sum+=A[i];
     }  
     if(A[N-1]%2!=0)
     {
       if(A[N-2]%2!=0)
       ans=0;
       else
       idx=N-1;  
     }
     else
     {
       int ele=sum%6;
       for(i=N-1;i>-1;i--)
       {
          if( (A[i]==ele) || ( ele+6<10&&A[i]==(ele+6) ) )
          {
            idx=i;
            break;
          }  
       }
       if(idx==N-1)
       {
          idx=-1;
          for(i=N-2;i>-1;i--)
         {
           if( (A[i]==ele) || ( ele+6<10&&A[i]==(ele+6) ) )
           {
             idx=i;
             break;
           }  
         }
         if(idx==-1)
         ans=0;
       }
     }
     if(ans)
     {
       for(i=0;i<N;i++)
       {	
         if(i!=idx)
         cout<<A[i];
       } 
     }
     else
     cout<<"-1";
     cout<<"\n";
  }
  return 0;
}