#include <bits/stdc++.h>
#define MOD 1000000007 
typedef unsigned long long int LL;
using namespace std;
int main()
{
	int N=counts.size();
	int ind[200000]={0};
	for(int i=0;i<N;i++)
	{
		v[counts[i]].push_back(i);
	}
	for(int i=0;i<N;i++)
	{

		if(counts[i]!=-1)
		{
			int a=counts[i];
			for(int j=ind[a],k=0;k<a;k++,j++)
				{
					cout<<v[a][j]<<" ";
					counts[j]=-1;
				}
				cout<<"\n";
			ind[a]+=a;
		}
	}
	return 0;
}