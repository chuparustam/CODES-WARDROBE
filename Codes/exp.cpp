#include <bits/stdc++.h>
using namespace std;
bool Comp(int x,int y)
{
  return x<y;
  /*if(x>y)
  return true;
  else
  return false;*/	
}  
int main()
{
  vector <int> V;
  int a,N;
  cin>>N;
  for(int i=0;i<N;i++)
  {	
    cin>>a;	
    V.push_back(a);	 
  }
  sort(V.begin(),V.end(),Comp);
  for(int i=0;i<V.size();i++)
  cout<<V[i]<<" ";	
  return 0;
}