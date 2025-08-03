#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {1,1,0,1,1,1};
         int cnt = 0, max_cnt = 0;
        for(auto num : nums){
          if(num == 1) cnt++;

          else cnt = 0;

          max_cnt = max(max_cnt , cnt);
        }

        cout<<max_cnt;
    return 0;
}



//Leetcode  => 485. Max Consecutive Ones

// Link  =>  https://leetcode.com/problems/max-consecutive-ones/submissions/1683993508/