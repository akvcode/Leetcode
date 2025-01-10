// Akash Vishwakarma
// Date - 10/01/2025
// www.skytup.com
// This question has taken approx 4 hour to solve for me 😂😂😂 But at the end, I just solved it 

#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    // Function to return maximum character frequency map
    unordered_map<char, int> returnIdentity(vector<string> &str)
    {
        unordered_map<char, int> charFrequency;

        for (const auto &word : str)
        {
            unordered_map<char, int> tempFrequency;
            for (const auto &v : word)
            {
                tempFrequency[v]++;
            }

            for (const auto &pair : tempFrequency)
            {
                charFrequency[pair.first] = max(charFrequency[pair.first], pair.second);
            }
        }

        return charFrequency;
    }

    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        vector<string> ans;
        // Get the target character frequencies from words2
        auto targetFrequency = returnIdentity(words2);

        for (const auto &word : words1)
        {
            int temp = 0;
            vector<string> ch;
            ch.push_back(word);
            auto num = returnIdentity(ch);
            ch.clear(); // Fix: Use clear() instead of empty()

            for (auto &x : targetFrequency)
            {
                // Check if the word satisfies character frequency requirements
                if (word.find(x.first) < word.size() && num[x.first] >= x.second)
                {
                    temp++;
                }
            }

            // If all conditions are satisfied, add to result
            if (temp == targetFrequency.size())
            {
                ans.push_back(word);
            }
        }
        return ans;
    }
};

int main()
{
    // Sample input
    vector<string> a = {"amazon", "apple", "facebook", "google", "leetcode"};
    vector<string> b = {"e", "oo"};

    Solution s;
    vector<string> result = s.wordSubsets(a, b);

    // Output the result
    for (auto &x : result)
    {
        cout << x << endl;
    }

    return 0;
}
