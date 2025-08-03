#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "AABABBA";
    int k = 1;

        //for keeping count of all alphabets
        vector<int>count(26, 0);
        int left =0, right = 0, maxCount = 0, maxWindow = 0;
        while(right < s.length()){
          count[s[right] - 'A']++;
          //track of most frequent char
          maxCount = max(maxCount, count[s[right] - 'A']);
        //if cur win - most fre > k 
        while( (right-left + 1) - maxCount > k){
          count[s[left] - 'A']--;
          left++;
        }
        maxWindow = max(maxWindow , right - left + 1);
        right++;
        }

        cout<<maxWindow;
    return 0;
}


//Leetcode  => 424. Longest Repeating Character Replacement

// Link  =>  https://leetcode.com/problems/longest-repeating-character-replacement/submissions/1694351311/