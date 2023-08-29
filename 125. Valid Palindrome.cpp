#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1, c=0;
        while(i<=j){
            if((97<=s[i] && s[i]<=122)) s[i]=s[i]-32;
            if((97<=s[j] && s[j]<=122)) s[j]=s[j]-32;
            if(s[i]<48 || (57<s[i] && s[i]<65) || 90<s[i]){
                c=1;
                i++;
            }
            if(s[j]<48 || (57<s[j] && s[j]<65) || 90<s[j]){
                c=1;
                j--;
            }
            if(c==1){
                c=0;
                continue;
            }

            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution solve;
    string s = "noyon";
    bool res = solve.isPalindrome(s);
    if(res) cout<<"Yes, palindrome!\n";
    else cout<<"Opps, Not Palindrome!\n";
    return 0;
}