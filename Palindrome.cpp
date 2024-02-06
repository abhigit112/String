#include<iostream>
#include<string>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    int n=x.length();
    for(int i=0;i<n;i++)
    {
        int s=0;
        int e=n-1;
        if (x[s]!=x[e])
        {
            cout<<"Not Pal"<<endl;
            return 0;
            s++;
            e--;
        }
        
    }
    cout<<"Pal"<<endl;

    return 0;
}
