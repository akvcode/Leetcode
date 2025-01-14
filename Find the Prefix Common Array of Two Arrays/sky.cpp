#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {

        return {1,2,3,4};  
    }
};

int main()
{
    Solution s;
    vector<int> A = {1,3,2,4};
    vector<int> B = {3,1,2,4};
    for (auto x : s.findThePrefixCommonArray(A, B))
    {
        cout << x << endl;
    }
}