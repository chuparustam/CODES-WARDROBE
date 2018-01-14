#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,k;
	cin>>T;
	for(k=1;k<=T;k++)
	{
	   int N,Q,i,A[100000],j,dpL[100000],dpR[100000];
	   cin>>N>>Q;
	   for(i=0;i<N;i++)
	   cin>>A[i];

       dpL[0]=0;
       int same=-1;
       for(i=1;i<N;i++)
       {
           if(A[i-1]==A[i])
           {
             if(A[i]==same)
             dpL[i]=dpL[i-1]+1;
             else
             {
               dpL[i]=dpL[i-1]+2;
               same=A[i];
             }  
           }
           else
           {
             dpL[i]=dpL[i-1];
             same=-1;
           }  
       }
       dpR[N-1]=N-1;
       for(i=N-2;i>-1;i--)
       {
          if(A[i]==A[i+1])
          dpR[i]=dpR[i+1];
          else
          {
            dpR[i]=i;
          }
       }

	   cout<<"Case "<<k<<":\n";
	   while(Q--)
	   {
	      cin>>i>>j;
	      int ans;
	      if(dpL[i]==0)
	      ans=j-i+1-dpL[j];
	      else if(dpL[i]==dpL[i-1])
          ans=j-i+1-(dpL[j]-dpL[i]);
          else
          {
             int diff=dpL[i]-dpL[i-1];
             if(diff==2)
             dpL[i]-=2;
             else
          }
	      cout<<ans<<"\n";
	   }
	}
	return 0;
}