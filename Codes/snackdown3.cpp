#include <bits/stdc++.h>
using namespace std;
int bisearch(int L,int R,int A[],int ele)
{
	while(L<R)
	{
	   int mid=(L+R)/2;
	   if(A[mid]<ele)
       L=mid+1;
       else if(A[mid]==ele)
       {
         while(mid>0)
         {	
           if(A[mid-1]==ele)
           mid--;
           else
           break;	
         }
         return mid;  	
       }
       else
       R=mid-1;	
	}
	return L;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int N,Q,i,A[100000],K,ans;
	   cin>>N>>Q;
	   for(i=0;i<N;i++)
	   cin>>A[i];
	   sort(A,A+N);
	   while(Q--)
	   {
	      ans=0;
	      cin>>K;
	      int flag=1;
	      if(A[N-1]>=K)
	     { 	
           int idx;

           if(A[N-1]!=K)
           idx=bisearch(0,N-1,A,K);
           else
           idx=bisearch(N-2,N,A,K);
           	
           cout<<"idx ="<<idx<<"\n";
           ans+=N-idx;
           idx--;
           i=idx;
         }
         else if(K>A[N-1]+N-1)
         {	
           cout<<"0\n";
           flag=0;
         }  
         else	
         i=N-1;

         if(flag)
         {
           int j=0,diff;
           while(j<i)
           {
             diff=K-A[i];

             if(j+diff-1<i)
             {	
               ans++;
               i--;
               j+=diff;
             }
             else
             break; 	
           }	
           cout<<ans;
	       cout<<"\n";
	     }
	   } 
	}
	return 0;
}