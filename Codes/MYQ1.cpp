#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int N;
	   cin>>N;
	   if(N==1)
	   cout<<"poor conductor";
	   else
	   {
         int rn,sp,d;
         char SP,D;

         rn=(N+3)/5;
         d=rn%2;
         sp=(N-1)%5;

         if(sp==3)
         {
           SP='A';
           D='R';
         } 
         else if(sp==1||sp==0)
         SP='W';
         
         if(d)
         {
            if(sp==2)
            SP='A';
            else if(sp==4)
            SP='M';
            if(sp==0||sp==4)
            D='R';
            else if(sp==1||sp==2)
            D='L';
         }
         else
         {
            if(sp==2)
            SP='M';
            else if(sp==4)
            SP='A';
            if(sp==0||sp==4)
            D='L';
            else if(sp==1||sp==2)
            D='R';
         }

         cout<<rn<<" "<<SP<<" "<<D;
	   }
	   cout<<"\n";
	}
	return 0;
}