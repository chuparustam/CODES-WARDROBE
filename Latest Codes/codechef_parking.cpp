#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j,dir[1005],left=0,right=0;
  cin>>n;
  for(i=0;i<n;i++)
  cin>>dir[i];

  for(j=0;j<n-1;j++)
{ 
  for(i=0;i<n-1;i++)
  {
    if(dir[i]==1&&dir[i+1]==-1)
    {
       dir[i]=-1;
       dir[i+1]=1;
    }
  }
} 

  for(i=0;i<n;i++)
  {
    if(dir[i]==-1)
    left++;
    else
    break;
  } 
  right=n-left;
  if(right>=left)
  cout<<left+1;
  else
  cout<<left;
  return 0;
}