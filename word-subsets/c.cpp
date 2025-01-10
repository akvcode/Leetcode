#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<string> b = {"lo", "eo"};
    vector<char> str;
    // cout<<b[0][1];

    for (int k = 0; k < b.size(); k++)
    {
        for (int l = 0; l < b[k].size(); l++)
        {
            char ch = b[k][l];
            str.push_back(ch);
        }
    }

    for (auto x:str ){

        cout<<x<<endl;
        /* code */
    }
    
}