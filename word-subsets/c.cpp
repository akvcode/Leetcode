#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

unordered_map<char, int> returnIdentity(vector<string> &str) {
    unordered_map<char, int> charFrequency;

    for (const auto &word : str) {
        unordered_map<char, int> tempFrequency;
        for (const auto &v : word) {
            tempFrequency[v]++;
        }

        for (const auto &pair : tempFrequency) {
            charFrequency[pair.first] = max(charFrequency[pair.first], pair.second);
        }
    }

    return charFrequency;
}

int main()
{

    vector<string> b = {"l","e"};
    
    auto ch = returnIdentity(b);

    for (auto &x : ch)
    {
        cout << x.first << " " << x.second << endl;
    }
    // cout<<ch[1];
}