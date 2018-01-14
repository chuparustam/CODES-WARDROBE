#include <bits/stdc++.h>
using namespace std;
int main()
{
  string temp,S;
  int good[26]={0},i,j,N;

  cin>>temp;
  cin>>S;
  cin>>N;

  for(i=0;i<temp.length();i++)
  good[temp[i]-97]=1;
  
  while(N--)
  {
  	string A;
  	cin>>A;
  	int flag=1;
  	int lenA=A.length(),lenS=S.length();

  	i=0;
  	while(i<lenA&&j<lenS)
  	{
       if(A[i]!=S[j])
       {
          if(S[j]=='?')
          {
              if(good[A[i]-97]==0)
              break;
          }	
          else
          {
              if(good[A[i]-97]==1)
              {
                  if(j<(lenS-1)&&S[j+1]==A[i])
                  {	
                    flag=1;
                    j++;
                  } 
                  else
                  {
                  	flag=0;
                  	break;
                  }	
              }	
              else
              {
                   int len1=lenA-i;
                   int len2=lenS-j-1;
                   if(len2>len1)
                   {
                   	  flag=0;
                   	  break;
                   }
                   else if(len2==len1)
                   i--;
                   else
                   {
                     int len=i+len1-len2;
                     while(i<len)
                   	 {
                   	 	if(good[A[i]-97]==1)
                   	 	break;
                   	 	i++;	
                   	 }
                   	 if(i<len)
                   	 {
                   	 	flag=0;
                   	 	break;
                   	 }
                   	 else
                   	 i--;
                   }	
              }	
          }	
       }
       i++;
       j++;
  	}	
  	if(i==lenA&&j==lenS)
  	{	
  	 
  	  	if(i==lenA&&j==lenS-1&&S[j]=='*')
  	  	cout<<"YES";
  	    else
  	    cout<<"NO";		
  	}  
  	else
  	cout<<"NO";

  	cout<<"\n";
  }	
  return 0;
}