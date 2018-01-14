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
	   int N,Q,i,A[100000],L,R,D[100000];
	   cin>>N>>Q;
	   for(i=0;i<N;i++)
	   cin>>A[i];

	   D[0]=1;
	   for(i=1;i<N;i++)
	   {
	      if(A[i]!=A[i-1])
	      D[i]=D[i-1]+1;
	      else
	      D[i]=D[i-1];   
	   }

	   cout<<"Case "<<k<<":\n";
	   while(Q--)
	   {
	      cin>>L>>R;
	      cout<<D[R-1]-D[L-1]+1<<"\n";
	   }
	}
	return 0;
}