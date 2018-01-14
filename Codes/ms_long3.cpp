#include <bits/stdc++.h>
typedef long long int LL;
using namespace std;
int main()
{
	int T,len,i;
	
	char ch='A';
	cin>>T;
	while(T--)
	{
	   int freq[10]={0},flag[26]={0};
	   string S;
	   cin>>S;
	   len=S.length();
	   for(i=0;i<len;i++)
	   {	
	     int d=(int)(S[i]-48);
	    /// cout<<d<<" ";
	     freq[d]++;
       }
	   //for(i=0;i<10;i++)
	   //cout<<freq[i]<<" ";
	   //cout<<"\n";	

	   if(freq[6]>=2)
	   flag[1]=1;

       if(freq[6]>=1)
       {
         for(i=5;i<=9;i++)
         {
           if(i==6)
           continue;
           if(freq[i]>=1)
           flag[i-5]=1;
         }
       }

       if(freq[7]>=2)
       flag[12]=1;

       if(freq[7]>=1)
       {
         for(i=0;i<=9;i++)
         {
           if(i==7)
           continue;
           if(freq[i]>=1)
           flag[i+5]=1;
         }
       }

       if(freq[8]>=2)
       flag[23]=1;

       if(freq[8]>=1)
       {
         for(i=0;i<=9;i++)
         {
           if(i==8)
           continue;
           if(freq[i]>=1)
           flag[i+15]=1;
         }
       }
       
       if(freq[9]>=1&&freq[0]>=1)
       flag[25]=1;

       for(i=0;i<26;i++)
       if(flag[i])
       {	
         char ans=ch+i;
         cout<<ans;
       }  
       
       cout<<"\n";
	}
	return  0;
}