#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    // Sort both strings
    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());
    for(int i=0;i<a.length();i++)
    {
        for(int j=0;j<a.length()-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
            
        }
    }
      for(int i=0;i<b.length();i++)
    {
        for(int j=0;j<b.length()-i-1;j++)
        {
            if (b[j]>b[j+1])
            {
                swap(b[j],b[j+1]);
            }
            
        }
    }
    cout<<a;
    cout<<b;
    // Check if the sorted strings are equal
    if (a == b) {
        cout << "1"; // Strings are anagrams
    } else {
        cout << "0"; // Strings are not anagrams
    }

    return 0;
}
