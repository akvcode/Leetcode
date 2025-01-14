#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        vector<int> ans;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (int j = 0; j <= i; j++)
            {
                for (int k = 0; k <= i; k++)
                {
                    if (A[j] == B[k])
                    {
                        count++;
                    }
                }
            }
            ans.push_back(count);
        }

        // return {1,2,3,4};
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