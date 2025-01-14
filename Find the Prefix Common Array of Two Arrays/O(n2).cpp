// Coded on 14-01-2005
// Akash Vishwakarma
// Time complexity O(n2)
#include <bits/stdc++.h>
using namespace std;
/*
While that solution is not effiecient due to its Time Complexity O(n3)
So lets solve it in time complexity of O(n2)
*/
class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        vector<int> ans(n);
        unordered_map<int, int> freqA, freqB;

        for (int i = 0; i < n; i++)
        {
            freqA[A[i]]++;
            freqB[B[i]]++;
            int count = 0;
            for (auto &pair : freqA)
            {
                if (freqB.find(pair.first) != freqB.end())
                {
                    count += min(pair.second, freqB[pair.first]);
                }
            }
            ans[i] = count;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};
    for (auto x : s.findThePrefixCommonArray(A, B))
    {
        cout << x << endl;
    }
}