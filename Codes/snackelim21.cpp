#include <bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
      int n,i,j,flag=1;
      int mat[2][500];
      char ch;
      cin>>n;
      for(i=0;i<2;i++)
      {  
      for(j=0;j<n;j++)
      {
         cin>>ch;
         if(ch=='#')
         mat[i][j]=1;
         else
         mat[i][j]=0;   
      }
      }
      int ex=2;
      int set=0;
      for(i=0;i<n;i++)
      {
         if(ex==0)
         {
            if(mat[0][i]!=1)
            {
              while(i<n)
              {
                if((mat[0][i]==mat[1][i])&&(mat[0][i]==0))
                i++;
                else
                {
                  flag=0;
                  break;
                } 
              }
              if(flag==0)
              break; 
            }
            if(set==0)
            set=1;
            ex=mat[1][i];  
         }
         else if(ex==1)
         {
             if(mat[1][i]!=1)
            {
              while(i<n)
              {
                if((mat[0][i]==mat[1][i])&&(mat[1][i]==0))
                i++;
                else
                {
                  flag=0;
                  break;
                } 
              }
              if(flag==0)
              break; 
            }
            if(set==0)
            set=1; 
            ex=1-mat[0][i];   
         }
         else
         {
            if(mat[0][i]==1&&mat[1][i]==0)
            {  
              if(set==0)
              set=1;  
              ex=0;
            }
            if(mat[0][i]==0&&mat[1][i]==1)
            {  
              if(set==0)
              set=1;  
              ex=1;
            } 
            if(mat[0][i]==1&&mat[1][i]==1)
            {
              if(set==0)
              set=1;  
            }  
            if(mat[0][i]==0&&mat[1][i]==0)
            {
              if(set)
              {
                while(i<n)
               {
                  if((mat[0][i]==mat[1][i])&&(mat[1][i]==0))
                  i++;
                  else
                 {
                   flag=0;
                   break;
                 } 
               }
               if(flag==0)
               break; 
              }  
            }  
         }  
      }

      if(flag)
      cout<<"yes";   
      else
      cout<<"no";

      cout<<"\n";   
   }
   return 0;
}