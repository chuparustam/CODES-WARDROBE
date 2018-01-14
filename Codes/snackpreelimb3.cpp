#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin>>t;
    while(t--)
{
        int n,a[2][100000],i,f1=0,f2=0,j;
        char ch;
        cin>>n;
        for(i=0;i<2;i++)
        for(j=0;j<n;j++)
        {
          cin>>ch;
          if(ch=='*')
          {	
            a[i][j]=1;
            if(i==0)
            f1=1;
            else
            f2=1;	
          }  
          else
          a[i][j]=0;
        }
        int ans=0;
        if(f1&f2)
        ans++;
        int up=0,low=0;
        j=0;	
        while(j<n-1)
        {
          if(a[0][j]==1)
          up=1;
          if(a[1][j]==1)
          low=1;	
          if(up&&a[0][j+1])
          {
      	    ans++;
      	    up=0;
      	    low=0;
          }
          if(low&&a[1][j+1])
          {
      	    ans++;
      	    up=0;
      	    low=0;
          }	
          j++;
        }
        cout<<ans<<"\n";  
}
return 0;
}