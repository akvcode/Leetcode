#include <iostream>
#include <stack>
#include <string>

using namespace std;
// This code is written by Akash Vishwakarma on leetcode 10/10/2024
// Solution class
class Solution
{
public:
    int minSwaps(string s)
    {
        // Initialize a stack to keep track of opening brackets
        stack<char> st;

        // Iterate over each character in the string
        for (char &ch : s)
        {
            // If the character is an opening bracket, push it onto the stack
            if (ch == '[')
            {
                st.push(ch);
            }
            // If the character is a closing bracket and the stack is not empty,
            // pop the corresponding opening bracket from the stack
            else if (!st.empty())
            {
                st.pop();
            }
        }

        // The minimum number of swaps required is half the number of unmatched opening brackets plus one
        // This is because each swap can balance two brackets
        return (st.size() + 1) / 2;
    }
};

int main()
{
    Solution solution;
    string s;

    // Input string
    cout << "Enter bracket sequence: ";
    cin >> s;

    // Calculate minimum swaps
    int minSwapsRequired = solution.minSwaps(s);

    // Display result
    cout << "Minimum Swaps Required: " << minSwapsRequired << endl;

    return 0;
}