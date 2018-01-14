#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   char sign[1000000];
	   cin>>sign;
	   int i,grt=0,les=0,ans=1;
	   for(i=0;sign[i]!='\0';i++)
	   {
         if(sign[i]=='<')
         {
            if(grt!=1)
            {
              ans++;
              grt=1;
            }
         }
         else if(sign[i]=='>')
         {
             if(les!=1)
             {
               ans++;
               les=1;
             }
         }
	   } 
	   cout<<ans<<"\n";
	}
	return 0;
}