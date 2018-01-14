#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,a[100],flag=1,sum=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
	  cin>>a[i];
	  sum+=a[i];
	}  
	if(sum<k)
	cout<<"-1";
	else if(n*8<k)
	cout<<"-1";
	else
	{
	   int temp=0;
	   for(i=0;i<n;i++)
	   {
         if(k>=8)
         {
            if(a[i]>=8)
            {	
              k-=8;
              if(i!=n-1)
              a[i+1]=a[i]-8;
            }  
            else
            k-=a[i];
         }
         else
         {
            if(a[i]<=k)
            k-=a[i];
            else
            k=0;
         }
         if(k==0)
         {
           cout<<i+1;
           break;
         }  
	   }
	}
	if(flag==0)
	cout<<"-1";
	return 0;
}