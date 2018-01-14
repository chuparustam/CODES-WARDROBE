#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,i,j,k,pointX[1000],pointY[1000],f=0,Y,X;
	float M1,M2,slope;
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cin>>pointY[i];
	  pointX[i]=i+1;
	}
	float M=(float)(pointY[1]-pointY[0])/(float)(pointX[1]-pointX[0]),N;
	for(i=2;i<n;i++)
	{
	   N=(float)(pointY[i]-pointY[0])/(float)(pointX[i]-pointX[0]);
	   if(N!=M)
	   break;	
	}
if(i!=n)
{	  
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
	   {
	       M1=(float)(pointY[j]-pointY[i])/(float)(pointX[j]-pointX[i]);
	       int set1[1000]={0},set2[1000]={0},first=0,ans=1,second=0;
	       set1[i]=1;
	       set1[j]=1;
	       for(k=0;k<n;k++)
	       {
	          if(k!=i&&k!=j)
	          {
                 slope=(float)(pointY[k]-pointY[i])/(float)(pointX[k]-pointX[i]);
                 if(slope==M1)
                 set1[k]=1;
                 else
                 {
                    if(first==0)
                    {
                      first=1;
                      second=1;
                      M2=slope;
                      Y=pointY[k];
                      X=pointX[k];
                      set2[k]=1;
                    }
                    else
                    {
                       slope=(float)(pointY[k]-Y)/(float)(pointX[k]-X);
                       if(slope==M1)
                       set2[k]=1;
                       else
                       {
                         ans=0; 
                         break;
                       }
                    }
                 }
	          }
	       }
	       if(ans!=0&&second)
	       {
	         f=1;
	         break;
	       }
	   }
	}
	if(f)
	cout<<"Yes";
	else
	cout<<"No";
}
else
cout<<"No";
	return 0;
}