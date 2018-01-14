#include <bits/stdc++.h>
using namespace std;
int N,K,i,A[100000],ctr=0;
int bearch(int low,int high,int key)
{
	while(low<=high)
	{
	   int mid=low+(high-low)/2;
	   if(A[mid]==key)
	   return mid;
	   else if(A[mid]>key)
	   high=mid-1;
	   else
	   low=mid+1;
	}
	return -1;
}
int main()
{
	cin>>N>>K;
	for(i=0;i<N;i++)
	cin>>A[i];
	sort(A,A+N);
    for(i=0;i<N;i++)
    if(bearch(i+1,N-1,A[i]+K)!=-1)
    ctr++; 
    cout<<"\n"; 
    cout<<ctr<<"\n";
    return 0;
}