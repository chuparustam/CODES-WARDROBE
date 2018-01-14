#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	  int N,P,f=1,i,j;
	  char S[100000],ch;
	  cin>>N>>P;
	  for(i=0;i<N;i++)
	  S[i]='x';	

	  if(P==1||N==2)
	  f=0;
	  else if(P!=N)
	  {
         for(j=0;j<P;j++)
         for(i=j;i<N;i+=P)
         {
           if(i%2==0)
           ch='a';
           else
           ch='b';
           if(S[i]=='x')
           S[i]=ch;
           else
           ch=S[i];	
           if(i-P<N&&S[i-P]=='x')
           S[i-P]=ch;	
           if(i+P<N&&S[i+P]=='x')
           S[i+P]=ch;
           if(S[N-1-i]=='x')
           S[N-1-i]=ch;
         }        
	  }
	  else
	  {
	  	 S[0]='a';S[N-1]='a';
	  	 for(i=1;i<N-1;i++)
	  	 S[i]='b';	
	  }	

	  for(i=0;i<N/2;i++)
	  if(S[i]!=S[N-1-i])
	  {
	  	f=0;
	  	break;
	  }

	  for(i=0;i<N;i++)
	  if(i+P<N&&S[i]!=S[i+P])
      {
	    f=0;
	    break;
      }

	  int A=0,B=0;
	  for(i=0;i<N;i++)
	  {	
        if(S[i]=='a')
        A++;	
        else
        B++;
      }
      if(A==N||B==N)
      f=0;	

	  if(f)
	  {	
	    for(i=0;i<N;i++)
	    cout<<S[i];	
	  }  
	  else
	  cout<<"impossible";
	  cout<<"\n";
	}
	return 0;
}