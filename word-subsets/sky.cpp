#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        int n = words1.size();
        vector<string> ans;
        vector <char> str;
        for (int k = 0; k < words2.size(); k++)
        {
            for (int l = 0; l < words2[k].size(); l++)
            {
                str.push_back(words2[k][l]);
            }
        }
        
        for(int i=0; i<n; i++){
            
                int temp=0;
            for (int j = 0; j < str.size(); j++)
            {
                
                if (words1[i].find(str[j])<words1[i].size())
                {
                    temp++;
                }
            }
            if (temp==str.size())
            {
                ans.push_back(words1[i]);
            }           
        }
    return ans;
    }
};

int main(){
    // vector<string> a= {"Rahul","Akash","Shivam","Abhay"};
    vector<string> a= {"amazon","apple","facebook","google","leetcode"};
    vector<string> b= {"lo","eo"}; 
    Solution s;
    vector<string> result = s.wordSubsets(a, b);
    for (auto &x:result)
    {
        cout<<x<<endl;
    }
    
}