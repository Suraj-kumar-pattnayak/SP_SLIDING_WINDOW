#include<bits/stdc++.h>
using namespace std;
int main(){
        string s = "abcabcbb";
        int left =0, right = 0, curr_window =0, max_window =0;
        unordered_set<char>mySet;

        while(right < s.length()){

          if(mySet.find(s[right]) != mySet.end()){// ele in set
            mySet.erase(s[left]);
            left++;
          }
          else{
            mySet.insert(s[right]);
            right++;
            curr_window = right - left;
            max_window = max(max_window, curr_window);
          }
        }
        cout<<max_window;
    return 0;
}


//Leetcode  => 3. Longest Substring Without Repeating Characters

// Link  =>  https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/1683928765/