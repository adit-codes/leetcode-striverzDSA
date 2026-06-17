#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        const int mx=INT_MAX/10;
        const int mn=INT_MIN/10;
        int rev=0,last_dig=0;
        {
            while(x!=0)
            {
                last_dig=x%10;
                x=x/10;
                if(rev > mx || rev < mn){return 0;}
                rev=(rev*10)+last_dig;
            }
            return rev;
        }    
    }
    bool isPalindrome(int x) {
        if(x>=0){if(x==reverse(x)) return true;else return false;}
        else return false;
    }
};
int main()
{
    Solution s;
    cout<<s.isPalindrome(-121);
    return 0;
}