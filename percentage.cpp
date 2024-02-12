#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    int lowercaseCount = 0;
    int uppercaseCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    for(int i = 0; i < a.length(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            lowercaseCount++;
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            uppercaseCount++;
        } else if (a[i] >= '0' && a[i] <= '9') {
            digitCount++;
        } else  {
            otherCount++;
        }
        // Count all characters except whitespace
        // if (!isspace(a[i])) {
        //     totalCount++;
        // }
    }

    // Calculate the percentages
    double lowercasePercentage = (static_cast<double>(lowercaseCount) / a.length()) * 100;
    double uppercasePercentage = (static_cast<double>(uppercaseCount) / a.length()) * 100;
    double digitPercentage = (static_cast<double>(digitCount) / a.length()) * 100;
    double otherPercentage = (static_cast<double>(otherCount) / a.length()) * 100;

    // Print percentages with one decimal place
    cout << "Percentage of lowercase letters: " << lowercasePercentage << ".0%" << endl;
    cout << "Percentage of uppercase letters: " << uppercasePercentage << ".0%" << endl;
    cout << "Percentage of digits: " << digitPercentage << ".0%" << endl;
    cout << "Percentage of other characters: " << otherPercentage << ".0%" << endl;

    return 0;
}
