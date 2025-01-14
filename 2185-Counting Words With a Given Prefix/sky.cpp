// You are given an array of strings words and a string pref.

// Return the number of strings in words that contain pref as a prefix.

// A prefix of a string s is any leading contiguous substring of s.

// Example 1:

// Input: words = ["pay","attention","practice","attend"], pref = "at"
// Output: 2
// Explanation: The 2 strings that contain "at" as a prefix are: "attention" and "attend".
 

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        // Counting the size of array
        int n=words.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (pref.size()>words[i].size()) continue;
            if (words[i].find(pref)==0)
            {
                count++;
            }
        }

        return count;
    }
};

int main(){
vector<string> words = {"akash","rasham","akaram","ram","maker","akanksha","shivani"};
Solution s;
cout<<s.prefixCount(words,"ak");
}
