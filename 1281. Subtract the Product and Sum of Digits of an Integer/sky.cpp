// Written by Akash Vishwakarma on 22-01-2025
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0, product = 1;
        int temp = n;

        while (temp > 0)
        {
            int degit = temp % 10;
            sum += degit;
            product *= degit;
            temp = temp / 10;
        }
        return ((sum > product) ? sum - product : product - sum);
    }
};

int main()
{
    Solution s;
    cout << " The Ans is = " << s.subtractProductAndSum(325);
}