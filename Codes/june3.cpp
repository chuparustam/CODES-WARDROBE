#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
/*int bisearch(int low,int high,int ele,int D[])
{
	int H=high,L=low;
	if(ele>=D[high])
	return high;
	else
	{	
	  int mid;
	  while(low<=high)
	  {
	    mid=(low+high)/2;
	    if(D[mid]==ele)
	    {	
	      while((D[mid+1]==ele)&&(mid<H))
	      mid++;
	      return mid;
	    }  
	    else if(A[mid]<ele)
	    low=mid+1;
	    else
        high=mid-1;  
	  }
	  while(D[mid]>ele&&mid>=L)
	  mid--;
	  while(D[mid]<=ele&&mid<=H)
	  mid++;	
	  if(D[mid]>ele)
	  mid--;	
	  return mid;
	}	
}*/
int bisearch(int low,int high,int ele,int D[])
{
	int i;
	for(i=high;i>=low;i--)
	{	
	  if(D[i]<=ele)
	  break;
	}
	if(i<low)
	return -1;  	
    return i;
}
int main()
{
	int T,p,q,r,i;
	int A[10000],B[10000],C[10000],sumA[10000]={0},sumC[10000]={0};
	cin>>T;
	while(T--)
	{
	  cin>>p>>q>>r;
	  for(i=0;i<p;i++)
	  {	
	    cin>>A[i];
	    if(i==0)
	    sumA[i]=A[i];
	    else
	    sumA[i]=A[i]+sumA[i-1];	
	  }  
	  for(i=0;i<q;i++)
	  cin>>B[i];
	  for(i=0;i<r;i++)
	  {	
	    cin>>C[i];
	    if(i==0)
	    sumC[i]=C[i];
	    else
	    sumC[i]=C[i]+sumC[i-1];	
	  }  
	  sort(A,A+p);
	  sort(B,B+q);
	  sort(C,C+r);

	  unsigned long long int sum=0,tsum,tsum1,tsum2,finalans=0;
      int highA=p-1,highC=r-1;
      i=q-1;

      while(i>-1)
      {
         int X=bisearch(0,highA,B[i],A);
         int Z=bisearch(0,highC,B[i],C);
         if(X>-1&&Z>-1)
         {
           B[i]=B[i]%MOD;
           tsum1=( (B[i]*(X+1))%MOD + sumA[X]%MOD )%MOD;
           tsum2=( (B[i]*(Z+1))%MOD + sumC[Z]%MOD )%MOD;
           tsum=(tsum1*tsum2)%MOD;
           sum=(sum%MOD+tsum)%MOD;
           highA=X;
           highC=Z;
         }
         i--;  
      }	
	  cout<<sum<<"\n";
	}
	return 0;
}