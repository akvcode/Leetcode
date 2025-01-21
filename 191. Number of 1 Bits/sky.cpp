// Written on 22-01-2025 Akash vishwakarma

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        int count =0;
        while (n!=0)
        {
            // checking last bit
            if(n&1){
                count++;
            }
            n>>=1;
        }
        return count;
    }
};
int main (){
    Solution s;
    cout << s.hammingWeight(5);
}