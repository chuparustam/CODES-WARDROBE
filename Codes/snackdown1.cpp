#include <bits/stdc++.h>
using namespace std;
int main()
{
	int R;
	cin>>R;
	while(R--)
	{
		char rep[501];
		int L,i,flag=1;
		int curr=0;
		cin>>L;
		cin>>rep;
		for(i=0;i<L;i++)
		{
			if(rep[i]=='H')
			curr+=1;
			else if(rep[i]=='T')
			curr-=1;

			if(curr>1||curr<0)
			{	
			  flag=0;
			  break;
			} 	
        }	
        if(curr!=0)
        flag=0;
        if(flag)
        cout<<"Valid";	
        else
        cout<<"Invalid";
        cout<<"\n";	
	}
	return 0;
}