#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        unordered_map<int, pair<int, int>> indexMap;

        // Create index map
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                indexMap[mat[i][j]] = {i, j};
            }
        }

        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);

        for (int k = 0; k < arr.size(); k++) {
            int num = arr[k];
            int row = indexMap[num].first;
            int col = indexMap[num].second;

            rowCount[row]++;
            colCount[col]++;

            if (rowCount[row] == n || colCount[col] == m) {
                return k;
            }
        }

        // If no row or column is completely painted, return -1
        return -1;
    }
};

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<vector<int>> mat = {{1, 4}, {2, 3}};
    Solution s;

    cout << "The smallest index where rows or column completely painted is " << s.firstCompleteIndex(arr, mat);

    return 0;
}