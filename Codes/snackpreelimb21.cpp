#include <bits/stdc++.h>
using namespace std;
int n,m;
int isSafe(int i,int j)
{
	if(i<0||j<0||i>=n||j>=m)
	return 0;

	return 1;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
{
  int a[500][500],i,j,k,maxele=0,ldis,finalans=0;
  cin>>n>>m;
  for(i=0;i<n;i++)   
  for(j=0;j<m;j++)
  {
    cin>>a[i][j];
    maxele=max(maxele,a[i][j]);
  }
  int K=max(n,m);

  for(i=0;i<n;i++)
  {  
    for(j=0;j<m;j++)
    {
      if(a[i][j]!=maxele)
      {  
        for(k=1;k<=K;k++)
        {
           int t=a[i][j];
           if(isSafe(i-k,j-k))
           t=max(t,a[i-k][j-k]);
           if(isSafe(i-k,j))
           t=max(t,a[i-k][j]);
           if(isSafe(i-k,j+k))
           t=max(t,a[i-k][j+k]);

           if(isSafe(i,j-k))
           t=max(t,a[i][j-k]);
           if(isSafe(i,j+k))
           t=max(t,a[i][j+k]);

           if(isSafe(i+k,j-k))
           t=max(t,a[i+k][j-k]);
           if(isSafe(i+k,j))
           t=max(t,a[i+k][j]);
           if(isSafe(i+k,j+k))
           t=max(t,a[i+k][j+k]);

           if(t==maxele)
           {
             ldis=k;
             break;
           }  
        }
        cout<<ldis<<" ";
        finalans=max(ldis,finalans);
      }   
    }
    cout<<"\n"; 
  }  
  cout<<finalans<<"\n";
}
	return 0;
}