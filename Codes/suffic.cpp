#include <bits/stdc++.h>
using namespace std;
bool hasEnding(string const &fullString,string const &ending)
 {
    if (fullString.length() >= ending.length())
    {
        return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending));
    } 
    else 
    return false;
}

int main ()
{
    string test1 = "binary";
    string test2 = "unary";
    string test3 = "tertiary";
    string test4 = "ry";
    string ending = "nary";

    if(hasEnding(ending,ending))
    cout<<"yaapee";
    else
    cout<<"fuck";

    return 0;
}