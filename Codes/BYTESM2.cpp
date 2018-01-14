#include <bits/stdc++.h>
using namespace std;
int N,M;
int isSafe(int x,int y)
{
  if(x<0||x>=N||y<0||y>=M)
  return 0;

  return 1;	
}
int main()
{
	int i,j,A[100][100],dp[100][100];
	cin>>N>>M;
  for(i=0;i<N;i++)
  for(j=0;j<M;j++)
  cin>>A[i][j];
  for(i=N-1;i>-1;i--)
  for(j=0;j<M;j++)
  {
    if(i==N-1)
    dp[i][j]=A[i][j];
    else  
    dp[i][j]=LONG_MAX;
    if(isSafe(i+1,j-1))
    dp[i][j]=min(dp[i][j],A[i][j]+dp[i+1][j-1]);
    if(isSafe(i+1,j))
    dp[i][j]=min(dp[i][j],A[i][j]+dp[i+1][j]);
    if(isSafe(i+1,j+1))
    dp[i][j]=min(dp[i][j],A[i][j]+dp[i+1][j+1]);
  }
  int ans=LONG_MAX;
  for(j=0;j<N;j++)
  ans=min(dp[0][j],ans);
  cout<<ans;
	return 0;
}