#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k,i,a[500],ans=0,head[500];
  cin>>n>>k;
  for(i=0;i<n;i++)
  cin>>a[i];
  if(n<=k)
  {
    for(i=0;i<n;i++)
    {
      ans=max(ans,a[i]);
      head[i]=ans;
    }  
  }
  else
  {
    long long int ctr[500],C,j;
    for(i=0;i<n-1;i++)
    {
      j=i+1;
      C=0;
      if(i>0&&head[i-1]<a[i])
      C++;
      while(a[j]<a[i]&&j<n)
      {
        C++;
        j++;
      }
      if(j==n&&a[n-1]<a[i])
      {
        j=0;
        while(a[j]<a[i]&&j<i)
        {
          C++;
          j++;
        }
      }
      ctr[i]=C;
    }
    j=0;C=0;
    if(head[n-2]<a[n-1])
    C++;
    while(a[j]<a[n-1]&&j<n-1)
    {
      C++;
      j++;
    }
    ctr[n-1]=C;
    
    for(i=0;i<n;i++)
    if(ctr[i]>=k)
    {
      ans=a[i];
      break;
    }  
  }
  cout<<ans;
  return 0;
}