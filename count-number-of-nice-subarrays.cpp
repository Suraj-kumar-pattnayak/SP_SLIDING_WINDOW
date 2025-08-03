#include<bits/stdc++.h>
using namespace std;

    int atMost(vector<int>& nums, int k){
      int left = 0, right = 0, NoOfOdd = 0, count = 0;
      while(right< nums.size()){
        if(nums[right] & 1) NoOfOdd++;

        while(NoOfOdd > k){
          if((nums[left] & 1)) NoOfOdd--;
          left++;
        }
        count += right - left + 1;  // adds the number of valid subarrays
        right++;
      }
      return count;
    }

int main(){
    vector<int>nums = {1,1,2,1,1};
    int k = 3;
    cout << atMost(nums, k) - atMost(nums, k-1);
    return 0;
}




        // int left =0, right = 0, cnt = 0, NoOfOdd = 0;
        // while(right < nums.size()){
        //   if(nums[right] & 1) NoOfOdd++;

        //   while(NoOfOdd > k){
        //     if(nums[left] & 1) NoOfOdd--;
        //     left++;
        //   }

        //   if(NoOfOdd == k) cnt++;
        //   right++;
        // }
        // return cnt;






//Leetcode  => 91248. Count Number of Nice Subarrays

// Link  =>  https://leetcode.com/problems/count-number-of-nice-subarrays/submissions/1694401962/