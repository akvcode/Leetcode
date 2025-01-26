#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0){
            int degit = x % 10;
            if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
                return 0;
            }
            ans = ans*10+ degit;
            x/=10;
        }
        return ans;
    }
};

int main(){
    int x = 93214;
    Solution s;
    cout<< s.reverse(x);
}