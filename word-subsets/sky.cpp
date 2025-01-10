// Akash Vishwakarma
// Date - 10/01/2025
// www.skytup.com
// This question has taken approx 4 hour to solve for me 😂😂😂 But at the end I just solved it 

#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
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
        auto targetFrequency = returnIdentity(words2);

        for (const auto &word : words1)
        {
            int temp = 0;
            vector<string> ch;
            ch.push_back(word);
            auto num = returnIdentity(ch);
            ch.clear(); 

            for (auto &x : targetFrequency)
            {
                if (word.find(x.first) < word.size() && num[x.first] >= x.second)
                {
                    temp++;
                }
            }

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
    // vector<string> a= {"Rahul","Akash","Shivam","Abhay"};
    vector<string> a = {"amazon", "apple", "facebook", "google", "leetcode"};
    vector<string> b = {"e", "oo"};
    Solution s;
    vector<string> result = s.wordSubsets(a, b);
    for (auto &x : result)
    {
        cout << x << endl;
    }
}