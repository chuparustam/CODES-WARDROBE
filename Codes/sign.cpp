#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   char sign[1000000];
	   scanf("%s",sign);
	   int i=0,N=strlen(sign),P=1,len;
	   while(i<N)
	   {
	   	 while(sign[i]=='='&&i<N)
	   	 i++;
	   	 if(sign[i]=='<')
	   	 {
	   	   len=0;
	   	   while(sign[i]=='<'||sign[i]=='='&&i<N)
	   	   {
	   	  	 if(sign[i]=='<')
	   	  	 len++;
	   	  	 i++;
	   	   }	
	   	   P=max(P,len+1);
	   	 }
	   	 if(sign[i]=='>')
	   	 {
	   	   len=0;
	   	   while(sign[i]=='>'||sign[i]=='='&&i<N)
	   	   {
	   	  	 if(sign[i]=='>')
	   	  	 len++;
	   	  	 i++;
	   	   }	
	   	   P=max(P,len+1);	
	   	 } 	  
	   }
	   printf("%d\n",P);	
	}
	return 0;
}