#include <bits/stdc++.h>
using namespace std;
int n,m;
int isSafe(int i,int j)
{
	if(i<0||j<0||i>=n||j>=m)
	return 0;

	return 1;
}
long long int dis(int x1,int y1,int x2,int y2)
{
	
  return max(abs(x2-x1),abs(y2-y1));//sqrt(abs(x2-x1)*abs(x2-x1)+abs(y2-y1)*abs(y2-y1));
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
       int a[500][500],i,j,k,maxele=0;
       long long int ldis,finalans=0,tempdis;
       vector < pair < int,int > > v;

       cin>>n>>m;
       for(i=0;i<n;i++)
       for(j=0;j<m;j++)
       {
         cin>>a[i][j];
         maxele=max(maxele,a[i][j]);
       }
       
       for(i=0;i<n;i++)
       for(j=0;j<m;j++)
       {
         if(a[i][j]==maxele)
         v.push_back(make_pair(i,j));
       }
    
       for(i=0;i<n;i++)
       for(j=0;j<m;j++)
       {
         int t=a[i][j];
         ldis=0;

         if(isSafe(i-1,j-1))
         t=max(t,a[i-1][j-1]);
         if(isSafe(i-1,j))
         t=max(t,a[i-1][j]);
         if(isSafe(i-1,j+1))
         t=max(t,a[i-1][j+1]);

         if(isSafe(i,j-1))
         t=max(t,a[i][j-1]);
         if(isSafe(i,j+1))
         t=max(t,a[i][j+1]);

         if(isSafe(i+1,j-1))
         t=max(t,a[i+1][j-1]);
         if(isSafe(i+1,j))
         t=max(t,a[i+1][j]);
         if(isSafe(i+1,j+1))
         t=max(t,a[i+1][j+1]);

         
	}
	return 0;
}