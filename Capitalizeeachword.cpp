#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char tolower(char x)
{
    if (x>='a' && x<='z')
    {
        return x;
    }
    else
    {
        char temp=x-'A'+'a';
        return temp;
    }
    
}
bool check(string x)
{
    int start=0;
    int end=x.size()-1;
    while (start<=end)
    {
       if (tolower(x[start])==tolower(x[end]))
       {
        start++;
        end--;
       }
       else
       {
        return 0;
       }
    }
    return 1;
}
void checkpalindrome(string x)
{
    int k=check(x);
    if (k==1)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    
}

int main()
{
    string s;
    getline(cin,s);
    checkpalindrome(s);
    
   
   return 0;
}
