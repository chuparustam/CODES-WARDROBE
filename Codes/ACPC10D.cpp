#include <bits/stdc++.h>
using namespace std;
int N;
int isSafe(int x,int y)
{
  if(x<0||x>=N||y<0||y>=3)
  return 0;

  return 1;	
}
int main()
{
	int k=1,i,j;
  cin>>N;
	while(N)
	{ 
    long long int A[100000][3],dp[100000][3];
    for(i=0;i<N;i++)
    for(j=0;j<3;j++)
    cin>>A[i][j];

    dp[N-2][1]=A[N-2][1]+min(A[N-1][1],A[N-1][1]+min(A[N-1][0],A[N-2][2]));
    dp[N-2][2]=A[N-2][2]+A[N-1][1];  
    dp[N-2][0]=A[N-2][0]+min(A[N-1][1],min(A[N-1][0]+A[N-1][1],dp[N-2][1]));
     
    for(i=N-3;i>-1;i--)
    for(j=2;j>-1;j--)
    {
      dp[i][j]=LONG_MAX;
      if(isSafe(i+1,j-1))
      dp[i][j]=min(dp[i][j],A[i][j]+dp[i+1][j-1]);
      if(isSafe(i+1,j))
      dp[i][j]=min(dp[i][j],A[i][j]+dp[i+1][j]);
      if(isSafe(i+1,j+1))
      dp[i][j]=min(dp[i][j],A[i][j]+dp[i+1][j+1]);
      if(isSafe(i,j+1))
      dp[i][j]=min(dp[i][j],A[i][j]+dp[i][j+1]);
    } 
    cout<<k<<". "<<dp[0][1]<<"\n";
    k++;
    cin>>N;
	}
	return 0;
}