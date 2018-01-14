#include <bits/stdc++.h>
using namespace std;
int res=10000;
void diff4(int etc)
{
  res=min(res,etc);
}
void diff3(int H,int h,int etc)
{
   if(H==-1)
   H=23;
   if(H==24)
   H=0;

   diff4(etc+abs(h-H));
   if(h>H)
   diff4(etc+24-h+H);
   else
   diff4(etc+24-H+h);	
}
void diff2(int H,int M,int h,int m,int etc)
{
	if(M==-1)
	{
	  M=0;
    H--;
	  if(H==-1)
    {  
	    H=23;
      //M=59;
    }  	
	}
  if(M==60)
  {
    M=0;
    H++;
    if(H==24)
    H=0;	
  }
    diff3(H,h,etc+abs(m-M));
    if(m>M)
    diff3(H-1,h,etc+60-m+M);
    else
    diff3(H+1,h,etc+60-M+m);	
}
void diff(int H,int M,int S,int h,int m,int s)
{
   diff2(H,M,h,m,abs(s-S));
   if(s>S)
   diff2(H,M-1,h,m,60-s+S);
   else
   diff2(H,M+1,h,m,60-S+s); 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   int finalans=0;
	   int N,K,i,j,H[51],M[51],S[51],h[51],m[51],s[51],ans[51][51];
	   int markN[51]={0};
	   int mark[51]={0};
	   char ch1,ch2;
	   vector< pair< int,pair< int,int > > > v;

	   cin>>N>>K;

	   for(i=0;i<N;i++)
	   cin>>H[i]>>ch1>>M[i]>>ch2>>S[i];
	   for(i=0;i<K;i++)
       cin>>h[i]>>ch1>>m[i]>>ch2>>s[i];

	   for(i=0;i<K;i++)
	   for(j=0;j<N;j++)
	   {	
         res=10000;
         diff(H[j],M[j],S[j],h[i],m[i],s[i]);
         ans[i][j]=res;
         pair <int,int> pr;
         pr.first=i;
         pr.second=j;
         v.push_back(make_pair(ans[i][j],pr));
       }
       sort(v.begin(),v.end());

       for(i=0;i<K*N;i++)
       {
       	  if(markN[v[i].second.second]==0&&mark[v[i].second.first]==0)
       	  {
            finalans+=v[i].first;
            markN[v[i].second.second]=1;
            mark[v[i].second.first]=1; 
       	  }	
       }
       cout<<finalans<<"\n";	
	}
	return 0;
}