#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,N,A[100001],i,temp,B[50001];
	cin>>T;
	while(T--)
	{
	   cin>>N;
	   for(i=0;i<2*N;i++)
	   cin>>A[i];
	   sort(A,A+2*N);
	  
	   i=1;
	   while(i<2*N-1)
	   {
	   	  temp=A[i];
	   	  A[i]=A[i+1];
	   	  A[i+1]=temp;
	   	  i+=2;
	   }
	   
	   for(i=0;i<N;i++)
	   B[i]=max(A[2*i],A[2*i+1]);
       cout<<B[N/2]<<"\n";
       for(i=0;i<2*N;i++)
       cout<<A[i]<<" ";
       cout<<"\n";
	}
	return 0;
}