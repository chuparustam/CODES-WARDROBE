#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,K,Q,i,j;
	int city[100000]={0};
	cin>>N>>K;
	for(i=0;i<K;i++)
	{
       int S;
       cin>>S;
       for(j=0;j<S;j++)
       {
          int temp;
          cin>>temp;
          city[temp]=i+1;
       }
	}
	cin>>Q;
	while(Q--)
	{
      int X,Y;
	  cin>>X>>Y;
	  int first,second;
	  first=city[X];
	  second=city[Y];
	  if(first>second)
	  {
	     int temp2;
	     temp2=first;
	     first=second;
	     second=temp2;
	  }
      cout<<min(second-first,first+K-second);
	  cout<<"\n";
	}
	return 0;
}