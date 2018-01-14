#include <bits/stdc++.h>
using namespace std;
int eceil(int n)
{
	if(n<0)
	return 0;	
	else if(n%2)
	return n/2+1;	
	else	
	return n/2;	
}
int main()
{
	int T,N,i,A[100000],k;
	cin>>T;
	while(T--)
	{
	   cin>>N;
	   long long int sum=0,ans;
	   for(i=0;i<N;i++)
	   {
	     cin>>A[i];
	     sum+=A[i];
	   }
	   ans=sum;
	   int top=0,exp,dir,flag,topi;  
       for(k=0;k<N-2;k++)
       {
          dir=1;
          flag=0;
          if(top==0)
          {
          	i=k;
          	exp=1;
          }
          else
          {
          	exp=topi;
          	i=k-1+topi;
          }	
          if(A[i+1]>1)
          {	
          while(i<N&&exp)
         {
            if(A[i]>=exp)
            {
               if(dir=1)
               exp++;
               else
               exp--; 
            }
            else
            {
               if(flag==0)
               {
                 topi=exp;
                 flag=1;
               }	
               if(dir==1)
               {
                  int I=eceil(exp-A[i]-2);
                  top=exp-1-I;
                  exp=top-2-I;
                  dir=-1;
               }
               else
               {
                  int K=top-exp;
                  int I=eceil(top-A[i]-K);
                  top=top-I;
                  exp=top-K-1-I;
               }  
               if(exp<1)
               break;
            }
            i++;
          }
          ans=min(ans,sum-top*top);
          }  
       }

        cout<<ans<<"\n";

	}
	return 0;
}