#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,i,s,m;
  cin>>T;
  while(T--)
  {
    s=0;m=0;
    char ch[101];
    int ctr[101]={0};
    cin>>ch;
    int len=strlen(ch);
    for(i=0;i<len;i++)
    {
      if(ch[i]=='s')
      s++;
      else
      m++;
    }
    if(m>s)
    cout<<"mongooses";	
    else if(s-m>m)
    cout<<"snakes";
    else
    {
       for(i=0;i<len;i++)
       {
          if(ch[i]=='s')
          {
            if((i)&&(ch[i-1]=='m')&&(!ctr[i-1]))
            {
              s--;
              ctr[i-1]=1;
              ctr[i]=1;
            }
            if((i!=(len-1))&&(ch[i+1]=='m')&&(!ctr[i+1])&&(!ctr[i]))
            {
              s--;
              ctr[i+1]=1;
            }  
          }
       }
       if(s>m)
       cout<<"snakes";
       else if(s==m)
       cout<<"tie";
       else
       cout<<"mongooses";
    }
    cout<<"\n";  
  }
  return 0;
}