#include <bits/stdc++.h>
//#define MOD 1000000007
typedef unsigned long long int LL;
using namespace std;
int main()
{
	LL T;
	cin>>T;
	while(T--)
	{
	   LL N,A[1000],B[1000],ctr1=1,ctr2=1;
	   int i;
	   cin>>N;
	   for(i=0;i<N;i++)
	   cin>>A[i];
	   for(i=0;i<N;i++)
	   cin>>B[i];	
	   sort(A,A+N);
	   sort(B,B+N);
	   /*for(i=0;i<N;i++)
	   cout<<A[i]<<" ";
	   cout<<"\n";
	   for(i=0;i<N;i++)
	   cout<<B[i]<<" ";*/	
	   for(i=N-2;i>-1;i--)
	   {	
	     if(A[i]==A[N-1])
	     ctr1++;
	     else
	     break;
	   }
	   for(i=N-2;i>-1;i--)
	   {	
	     if(B[i]==B[N-1])
	     ctr2++;
	     else
	     break;
	   }
	   //cout<<ctr2;  	
	   cout<<ctr1*ctr2<<"\n";
	}
	return 0;
}