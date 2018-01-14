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
	   int i,P=1,temP=1,x=1,begin=0;
	   for(i=0;sign[i]!='\0';i++)
	   {
        if(sign[i]=='<')
        {
          x++;
          temP=x;
          P=max(P,temP);
          begin=0;
        }  
        else if(sign[i]=='>') 
        {
          if(begin==0)
          {  
            x=1;
            begin=1;
            temP=x;
          }  
          else
          {
            x--;
            if(x==0)
            {
              temP++;
              x=1;
              P=max(P,temP);
            }  
          }
        }  
	   } 
	   cout<<P<<"\n";
	}
	return 0;
}