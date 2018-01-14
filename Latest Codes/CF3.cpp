#include <bits/stdc++.h>
using namespace std;
int main()
{
  int ctr=0,n,i,d,a[50000],b[50000],c[50000],ans,x=0,y=0,z=0;
  char op;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>op>>d;
    if(op=='&')
    a[x++]=d;
    else if(op=='^')
    b[y++]=d;
    else
    c[z++]=d;  
  }
  if(x>0)
  {
    ans=a[0];
    for(i=1;i<x;i++)
    ans=ans&a[i];
    if(ans!=0)
    {
      x=ans;
      ctr++;
    }  
  }
  if(y>0)
  {
    ans=b[0];
    for(i=1;i<y;i++)
    ans=ans^b[i];
    if(ans!=0)
    {
      y=ans;
      ctr++;
    }  
  }
  if(z>0)
  {
    ans=c[0];
    for(i=1;i<z;i++)
    ans=ans|c[i];
    if(ans!=0)
    {
      z=ans;
      ctr++;
    }  
  }
  if(ctr==0)
  cout<<"0";
  else
  {
    cout<<ctr<<"\n";
    if(x)
    cout<<"& "<<x<<"\n";
    if(y)
    cout<<"^ "<<y<<"\n";
    if(z)
    cout<<"| "<<z<<"\n";
  }
  return 0;
}