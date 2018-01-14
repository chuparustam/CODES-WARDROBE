#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,a[100];
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  if((n%2)&&(a[0]%2)&&(a[n-1]%2))
  cout<<"Yes";
  else
  cout<<"No";
  return  0;
}