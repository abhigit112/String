#include<iostream>
#include<string>
using namespace std;
string capitalize(string x)
{
    for (int i = 0; i <x.length(); i++)
    {
        if (i==0 || x[i-1]==' ')
        {
           x[i]=toupper(x[i]);
        }
        
    }
    return x;
}
int main()
{
    string a;
    getline(cin,a);
    cout<<capitalize(a);
}
