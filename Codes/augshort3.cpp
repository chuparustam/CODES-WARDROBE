#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,Q,A[1000][100],ans[100],i,j;
	cin>>N>>Q;
	for(i=0;i<N;i++)
	for(j=0;j<N;j++)
	cin>>A[i][j];
	for(i=0;i<N;i++)
	cout<<(-1)*A[0][i]<<" ";
	cout<<"\n";
	while(Q--)
	{
	   int p,F[1000];
	   cin>>p;
       for(i=0;i<N;i++)
       cin>>F[i];
       for(i=0;i<N;i++)
       A[i][p-1]=A[p-1][i]=F[i];

       for(i=0;i<N;i++)
       ans[i]=(-1)*A[0][i];

       for(i=0;i<N-1;i++)
       {
          int diff=A[i][i+1];
          if(abs(ans[i]-ans[i+1])!=diff)
          ans[i+1]=(-1)*ans[i+1];
       }
       for(i=0;i<N;i++)
       cout<<ans[i]<<" ";
       cout<<"\n";
	}
	return 0;
}