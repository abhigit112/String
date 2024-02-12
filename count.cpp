#include<iostream>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int count=1;
    for(int i=0;i<a.length();i++)
    {
        if (i<a.length() && a[i]==' ')
        {
            count++;
        }
        
    }
    cout<<count;
    return 0;
}
