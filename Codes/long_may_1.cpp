#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	char S[100001];
	while(T--)
	{
	   cin>>S;
	   int flag1=1,flag2=1,flag3=1;
	   int i=0;
	   int len=strlen(S);
	   while(i<len-1)
	   {
	     if(S[i]=='C')
	     {
            if(flag1==0)
            break;

            if(S[i+1]!='C')
            flag1=0;
	     }
	     else if(S[i]=='E')
	     {
            if(flag2==0||S[i+1]=='C')
            break;
             
            if(S[i+1]!='E')
            flag2=0;
	     }
	     else
	     {
            if(S[i+1]!='S')
            break;
	     }
	     i++;
	   }

	   if(i==len-1)
	   cout<<"yes";
	   else
	   cout<<"no";

	   cout<<"\n";
	}
	return 0;
}