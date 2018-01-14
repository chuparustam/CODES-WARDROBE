#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
  string S[8]={"a","ab","aab","aabb","aaabb","aaabab","aaababb","aaababbb"};
  string P("aabbab");
  char ch='a';
	cin>>T;
	while(T--)
	{
	   int N,A,L,i,j;
	   cin>>N>>A;

       if(A>2)
       { 
         cout<<"1 ";
         j=N;
         while(j>0)
         {  
            for(i=0;i<min(A,j);i++)
            {  
              char ch2=ch+i;
              cout<<ch2;
            }  
            j-=A;  
         }    
       }  
       else if(A==1)
       { 
         cout<<N<<" ";
         for(i=0;i<N;i++)
         cout<<ch;
       }  
       else
       {	
          if(N==1||N==2)
          L=1;
          else if(N==3||N==4)
          L=2; 
          else if(N>=5&&N<=8)
          L=3;
          else
          L=4;

          cout<<L<<" ";
          if(N<9)
          cout<<S[N-1];
          else
          {  
            for(i=1;i<=(N/6);i++)
            cout<<P;
            cout<<P.substr(0,N%6);
          }    
       }  
      cout<<endl;
	}
	return 0;
}