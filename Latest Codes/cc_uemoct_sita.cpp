#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
     
    // Initializing base value to 1, i.e 2^0
    int base = 1;
     
    int temp = num;
    while(temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;
         
        dec_value += last_digit*base;
         
        base = base*2;
    }
     
    return dec_value;
}
void decToBinary(int n,int sz)
{
    // array to store binary number
    int binaryNum[1000];
 
    // counter for binary array
    int i = 0;
    for(i=0;i<sz;i++)
        binaryNum[i]=0;
    i=0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = 4; j >= 0; j--)
        cout << binaryNum[j];
} 
int main()
{
    int n,i,j,k,num=0;
    cin>>n;
    int flag=1;
    int count=0;
    char ch;
    while(flag)
    {
        count++;
        cin>>ch;
        num=num*10+(ch-'0');
        if(ch==' ')
        flag=0;   
}
    int ans[n][n],finalans[n][n];
    ans[0][0]=num;    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=0&&j!=0)
            {
            cin>>num;
            ans[i][j]=binaryToDecimal(num);
            cout<<ans[i][j]<<" ";}
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                finalans[i][j]=ans[i][j]+1;
            else
            {
                finalans[i][j]=ans[j][i]+1;
            }
            cout<<finalans[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            decToBinary(finalans[i][j],count);
            cout<<" ";
        }
        cout<<endl;
    }

}