#include<iostream>
#include<string>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    int start = 0;
    for(int i = 0; i <= a.length(); i++) {
        if (i==a.length() || a[i] == ' ') {
            int end = i - 1;
            while (start < end) {
                char temp = a[start];
                a[start] = a[end];
                a[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    cout << a;
    return 0;
}
