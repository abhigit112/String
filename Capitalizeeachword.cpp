#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        if(i==0 || a[i-1]==' ')
        {
            a[i]=toupper(a[i]);
        }
    }
    cout<<a;
}
