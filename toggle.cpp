#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    string b;
    for(int i=0;i<a.length();i++)
    {
       b.push_back(toupper(a[i]));
    }
    if (!b.empty())
    {
        b[0]=tolower(b[0]);
    }
    
    cout << b;
    return 0;
}
