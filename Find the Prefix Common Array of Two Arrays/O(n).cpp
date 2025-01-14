// Coded on 14-01-2005
// Akash Vishwakarma
// Time complexity O(n2)
#include <bits/stdc++.h>
using namespace std;
/*
While that solution is not effiecient due to its Time Complexity O(n3)
So lets solve it in time complexity of O(n)
*/

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n);
        unordered_set<int> seenA, seenB; // To track elements in A and B
        int count = 0;

        for (int i = 0; i < n; i++) {
            // Insert the current elements from both A and B into their respective sets
            if (seenB.count(A[i])) count++; // A[i] is already in B's seen set
            if (seenA.count(B[i])) count++; // B[i] is already in A's seen set

            if (A[i] == B[i]) count++; // Both elements are the same

            seenA.insert(A[i]); // Add A[i] to seenA
            seenB.insert(B[i]); // Add B[i] to seenB

            ans[i] = count; // Store the prefix common count at index i
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