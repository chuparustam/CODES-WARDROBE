#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a[1000],d[1000],i;
	cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i]>>d[i];
    long long int curr=a[0],temp;
    for(i=1;i<n;i++)
    {
       if(curr+1>a[i])
       {
          long long int N=((curr+1-a[i])/d[i])+1;
          temp=a[i]+(N-1)*d[i];
          if(temp>curr)
          curr=temp;
          else	
          curr=a[i]+N*d[i]; 
       }
       else
       curr=a[i];
    }
    cout<<curr;
	return 0;
}