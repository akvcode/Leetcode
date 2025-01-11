#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int oddFreq(string s)
    {
        unordered_map<char, int> temp;
        for (int i = 0; i < s.size(); i++)
        {
            temp[s[i]]++;
        }
        int count=0;
        for (auto c : temp)
        {
            if (c.second % 2 != 0)
            {
                count++;
            }
        }
        return count;
    }

    bool canConstruct(string s, int k)
    {
        int n = s.size();
        auto odd = oddFreq(s);
        int c = 0; // Counter for odd frequencies
        // for (auto x:characters)
        // {
        //     if (x.second%2==0)
        //     {
        //         c++;
        //     }
        // }
        // if (c==characters.size())
        // {
        //     return true;
        // }

        return odd<=k && k<= s.size();
    }
};

int main()
{
    // string data = "Akash";
    string data = "Papa";
    int k = 5;
    for (char &c : data)
    {
        c = std::tolower(c);
    }

    Solution s;
    cout<<s.canConstruct(data,k);
    // for (auto &x : s.charFrequency(data))
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
}