#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int rev = 0, ori;

// Normal Approach
// int palindrome(int n)
// {
//     ori = n;
//     while(n>0) {
//         rev = rev * 10 + n % 10;
//         n = n / 10;
//     }
//     if(rev==ori)
//         return 1;
//     else
//         return 0;
// }

// String Reverse Approach
// bool palindrome(int original){
// string strOriginal = to_string(original);
// string strReversed = strOriginal;
// reverse(strReversed.begin(), strReversed.end());
// bool isPalindrome = (strOriginal == strReversed);
// return isPalindrome;
// }

// 2 - Pointer Approach
bool stringPalindrome(string str)
{
    int l = 0, r = str.length() - 1;
    while (l < r)
    {
        if (str[l] == str[r])
        {
            l++;
            r--;
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool recursivePalindrome(string str, int st, int end)
{
    if (st >= end)
    {
        return 1;
    }
    return (str[st] == str[end] && recursivePalindrome(str, st + 1, end - 1));
}

void swaps(char& a,char& b) {
    a=a^b;
    b=a^b;
    a=a^b;
}

string stringReversal(string str) { 
    // int k = str.length();
    // string revs;
    // while(k!=0) {
    //     revs += str[k - 1];
    //     k--;
    // }
    int r=0,l=str.length()-1;
    while (r<l) {
        swaps(str[r],str[l]);
        r++;
        l--;
    }
    return str;
}

string recursiveReversal(string str,int s,int e) {
    if(s>=e) {
        return str;
    }
    swaps(str[s],str[e]);
    return recursiveReversal(str,s+1,e-1);
}


int main()
{
    // palindrome(11011) ? cout<<"Pali" : cout<<"Not Pali";
    stringPalindrome("11011") ? cout << "Pali"<<endl : cout << "Not Pali"<<endl;
    string str = "1101011";
    recursivePalindrome(str, 0, str.length() - 1) ? cout << "Pali"<<endl : cout << "Not Pali"<<endl;
    cout << stringReversal("Jayanth")<<endl;
    string s ="Jayanth";
    cout<< recursiveReversal(s,0,s.length()-1);
    return 0;
}