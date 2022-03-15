#include<bits/stdc++.h>
using namespace std;

bool isPal(string &str)
{
    int begin = 0;
    int end = (int) str.size();
    while(begin < end)
    {
        if(str[begin] != str[end])
             return false;
        begin++;
        end--;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    if(isPal(s))
      cout<<"Yes the given string is a palindrom";
    else
      cout<<"No the given string is not a palindrom";
    
    return 0;
}