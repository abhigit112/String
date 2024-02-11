#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        int start=i;
        while(i<a.length() && a[i]!=' ')
        {
            i++;
        }
        int end=i-1;
        reverse(a.begin()+start,a.begin()+end+1);
    }
    cout<<a;
}
