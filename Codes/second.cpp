#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int N,A[100000],i,B[50000];
	   cin>>N;
	   for(i=0;i<2*N;i++)
	   cin>>A[i];
	   sort(A,A+2*N);
	   cout<<A[N+N/2]<<"\n";
	   for(i=0;i<=N-1;i++)
	   cout<<A[i]<<" "<<A[2*N-1-i]<<" ";
	   cout<<"\n";	
	}
	return 0;
}