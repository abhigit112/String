#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    int n=x.length();
    int s=0;
    int end=n-1;
    while (s<=end)
    {
        swap(x[s++],x[end--]);
    }
    cout<<x;
    
    return 0;
}
    }
};
