#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,a[101],flag=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>a[i];
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
           flag=1;
           break;
         }  
	   }
	if(flag)
    cout<<i+1;
    else		
	cout<<"-1";
	return 0;
}