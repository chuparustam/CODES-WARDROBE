#include <bits/stdc++.h>
using namespce std;
int main()
{
	string s;
	cin>>s;
	int i=0;
	while(s[i]!='b')
		i++;

	i++;
	int a=0;
	int pre=i;
	while(i<s.length())
	{
		if(s[i]=='a')
			a++;
		else
		{
			if(pre<a)
				pre=a;
			a=0;
		}
	}
}